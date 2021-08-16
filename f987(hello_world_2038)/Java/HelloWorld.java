


public class HelloWorld {
    public static void main(String[] args) throws InterruptedException {
        switch ((int) (System.currentTimeMillis() / 1000) % 10) {
            case 0:
            case 1:
                System.out.println("Hello, World!");
                break;
            case 2:
            case 3:
                System.out.println("hello, world");
                break;
            case 4:
            case 5:
                System.out.println("Halo, word!!!");
                break;
            case 6:
            case 7:
                System.out.println("世界，您好！");
                break;
            case 8:
            case 9:
                System.out.println("https://zerojudge.tw/ShowProblem?problemid=a001");
                break;
            default:
                break;
        }
        Thread.sleep(2000);
    }
}
