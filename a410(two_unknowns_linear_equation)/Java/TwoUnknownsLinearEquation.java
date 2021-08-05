import java.util.Scanner;


public class TwoUnknownsLinearEquation {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int a = in.nextInt();
        int b = in.nextInt();
        int c = in.nextInt();
        int d = in.nextInt();
        int e = in.nextInt();
        int f = in.nextInt();
        int delta = a * e - b * d;

        if (delta == 0) {
            if (a * f - c * d == 0) {
                System.out.println("Too many");
            } else {
                System.out.println("No answer");
            }
        } else {
            int delta_x = c * e - b * f;
            int delta_y = a * f - c * d;
            double x = (double) delta_x / delta;
            double y = (double) delta_y / delta;
            System.out.printf("x=%.2f%ny=%.2f%n", x, y);
        }

    }
}
