import java.util.Scanner;


public class Parity {
    private int num;
    private Integer /* to make nullable */ numOfOnes = null;

    public static void main(String[] args) {
        try (Scanner in = new Scanner(System.in)) {
            while (in.hasNext()) {
                final int num = in.nextInt();
                if (num == 0) {
                    break;
                }
                new Parity(num).printNumOfOnes();
            }

        }
    }

    public Parity(int num) {
        this.num = num;
    }

    public void printNumOfOnes() {
        this.countOnes();
        System.out.printf("The parity of %s is %d (mod 2).\n",
                          Integer.toBinaryString(this.num), this.numOfOnes);
    }

    private void countOnes() {
        /* cached */
        if (this.numOfOnes != null) {
            return;
        }

        int n = this.num;  /* not to overwrite */
        this.numOfOnes = 0;
        while (n != 0) {
            ++this.numOfOnes;
            /* keep removing the least significant 1, fast for sparse 1s */
            n &= (n - 1);
        }
    }
}
