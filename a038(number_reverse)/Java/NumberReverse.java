import java.util.Scanner;

/* try high-level implemantation */ 
public class NumberReverse {
    public static void main(String[] args) {
        /* no reverse method on String, StringBuilder is used instead */
        Scanner in = new Scanner(System.in);
        StringBuilder sb = new StringBuilder(in.next());

        /*
         * Since the index of StringBuilder starts from the MSB of a number,
         * reverse first so for-loop dosen't have to coutdown.
         */
        sb.reverse();

        /* find how many leading zeros there are */
        int i = 0;
        for (; i < sb.length() && sb.charAt(i) == '0'; ++i);

        /* the input is 0 */
        if (i == sb.length()) {
            System.out.println(0);
            return;
        }

        /* remove leading zeros */
        sb.delete(0, i);

        /* toString() is called automatically */
        System.out.println(sb);
    }
}
