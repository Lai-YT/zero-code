import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;


public class ComputerScoring {
    public static void main(String[] args) throws IOException {
        /* try-with-resources */
        try (BufferedReader in = new BufferedReader(new InputStreamReader(System.in))) {
            int numberOfProblems = Integer.parseInt(in.readLine());
            /* stores the answers in str and compare them directly by indexing */
            char[] correctAnswer = in.readLine().toCharArray();
            int numOfStudents = Integer.parseInt(in.readLine());

            while ((numOfStudents--) != 0) {
                char[] answer = in.readLine().toCharArray();
                /* counter */
                int correct = 0;
                /* too much not count, not enough no penalty */
                int valids = (numberOfProblems > correctAnswer.length
                              ? correctAnswer.length
                              : numberOfProblems);
                for (int i = 0; i < valids; ++i) {
                    if (answer[i] == correctAnswer[i]) {
                        ++correct;
                    }
                }
                System.out.println(correct * 100 / numberOfProblems);
            }
        }
    }
}
