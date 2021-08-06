import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.InputStreamReader;
import java.io.IOException;
import java.io.OutputStreamWriter;


public class BitwiseOperationCarry {
    public static void main(String[] args) throws IOException {
        int number = 0, count = 0;
        try (BufferedReader in =
                new BufferedReader(new InputStreamReader(System.in));
             BufferedWriter out =
                new BufferedWriter(new OutputStreamWriter(System.out))) {
            /* stops when number get is 0*/
            while ((number = Integer.parseInt(in.readLine())) != 0) {
                for (count = 0; (number % 2) != 0; number /= 2, ++count);
                out.write(count + "\n");
            }
            out.flush();
        }
    }
}
