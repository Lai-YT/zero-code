import java.lang.Math;
import java.util.Scanner;


public class FindTheWays {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);

        while (in.hasNext()) {
            long total  = in.nextLong();
            long remove = in.nextLong();

            /* all remove */
            if (remove == total) {
                System.out.println(1);
                continue;
            }
            /*
            * using combinations, make remove bigger:
            * C(10, 8) == C(10, 2) but less calculation
            */
            if (remove < (total >> 1)) {
                remove = total - remove;
            }
            /*
            * C(10, 8) = (10 * 9) / (1 * 2)
            * digits = ceil( log( C(10, 8))) = ceil (log10 + log9 - log1 - log2)
            */
            double digits = 0.0F;
            for (long n = remove + 1; n <= total; ++n) {
                digits += Math.log10(n) - Math.log10(total + 1 - n);
            }
            System.out.println((int) Math.ceil(digits));
        }
    }
}
