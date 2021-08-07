import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;


public class DDWantsToCry {
    public static void main(String[] args) throws IOException {
        /* fast io */
        try (BufferedReader in =
                new BufferedReader(new InputStreamReader(System.in));
             BufferedWriter out =
                new BufferedWriter(new OutputStreamWriter(System.out))) {
                    
            int numOfCase = Integer.parseInt(in.readLine());
            for (int i = 1; i <= numOfCase; ++i) {
                String[] dataLine = in.readLine().split(" ");
                long money = Long.parseLong(dataLine[0]);
                int person = Integer.parseInt(dataLine[1]);

                long distribution = money / person;
                int remain = (int) (money % person);

                out.write(String.format("Case %d :%n", i));
                /*
                 * the last person gets the extra remain,
                 * others have only the distribution
                 */
                for (int j = 1; j < person; ++j) {
                    out.write(String.format("第%d位 : 拿%d元並說DD! BAD!%n", j, distribution));
                }
                out.write(String.format("第%d位 : 拿%d元並說DD! BAD!%n", person, distribution + remain));
            }
            out.flush();
        }
    }
}
