import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.io.IOException;


public class ColorfulCarrot {
    public static void main(String[] args) throws IOException {
        try (BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
             BufferedWriter out = new BufferedWriter(new OutputStreamWriter(System.out))) {
            String line = "";
            while ((line = in.readLine()) != null) {
                int numOfCase = Integer.parseInt(line);
                while ((numOfCase--) != 0) {
                    /* x, y, z, w, n, m */
                    String[] dataLine = in.readLine().split(" ");
                    /*
                     * index is used as the carrot number,
                     * maps to the corresponding weight increament
                     */
                    int[] changes = {
                        0, Integer.parseInt(dataLine[0]), Integer.parseInt(dataLine[1]),
                        -1 * Integer.parseInt(dataLine[2]), -1 * Integer.parseInt(dataLine[3])
                    };

                    int poisons = 0;
                    int decreaseByPoison = Integer.parseInt(dataLine[4]);
                    int weight = Integer.parseInt(dataLine[5]);

                    char[] carrots = in.readLine().replaceAll("\\s+", "").toCharArray();
                    for (char carrot : carrots) {
                        weight -= decreaseByPoison * poisons;
                        if (weight <= 0) {
                            break;
                        }
                        if (carrot == '4') {
                            ++poisons;
                        }
                        weight += changes[carrot - 48];  /* char to int */
                    }
                    out.write(
                        (weight > 0 ? String.valueOf(weight) + "g" : "bye~Rabbit")
                        + '\n'
                    );
                }
                out.flush();
            }
        }  /* try block */
    }
}
