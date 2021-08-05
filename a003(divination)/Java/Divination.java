import java.util.Scanner;


public class Divination {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int month = in.nextInt();
        int date  = in.nextInt();
        int s = (month * 2 + date) % 3;
        switch (s) {
            case 0:
                System.out.println("普通");
                break;
            case 1:
                System.out.println("吉");
                break;
            case 2:
                System.out.println("大吉");
                break;
            default:
                break;
        }
    }
}
