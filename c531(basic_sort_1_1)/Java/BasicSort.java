import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.util.Arrays;


public class BasicSort {
    public static void main(String[] args) throws IOException {
        try (BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
             BufferedWriter out = new BufferedWriter(new OutputStreamWriter(System.out))) {
            /* start try */
            String line = "";
            while ((line = in.readLine()) != null) {
                
                String[] numStr = line.split(",");
                final int numOfNum = numStr.length;
                int[] nums =  new int[numOfNum];
                int[] evens = new int[numOfNum];
                /* i is for nums, numOfEven is for evens, also count at the same time */
                int numOfEven = 0;
                for (int i = 0; i < numOfNum; ++i) {
                    int num = Integer.parseInt(numStr[i]);
                    nums[i] = num;
                    if (isEven(num)) {
                        evens[numOfEven++] = num;
                    }
                }
                /* sort the evens and decide which to output */
                Arrays.sort(evens, 0, numOfEven);
                /* i is for nums, j is for evens */
                for (int i = 0, j = 0; i < numOfNum; ++i) {
                    out.write(
                        String.valueOf(isEven(nums[i]) ? evens[j++] : nums[i])
                    );
                    /* don't want a comma at the end */
                    if (i != numOfNum - 1) {
                        out.write(',');
                    };
                }
                out.write('\n');
            }
            out.flush();
        }  /* try block */
    }  /* main */


    static boolean isEven(final int n) {
        return (n % 2) != 1;
    }
}
