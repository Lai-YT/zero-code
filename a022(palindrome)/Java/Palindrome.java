import java.util.Scanner;


public class Palindrome {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        char[] chrs = in.next().toCharArray();
        int len = chrs.length;
        for (int i = 0; i < len; ++i) {
            if (chrs[i] != chrs[len - i - 1]) {
                System.out.println("no");
                return;
            }
        }
        System.out.println("yes");
    }
}
