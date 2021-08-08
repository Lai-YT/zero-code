import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.util.HashMap;


public class ComputerScoring {
    public static void main(String[] args) throws IOException {
        try (BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
             BufferedWriter out = new BufferedWriter(new OutputStreamWriter(System.out))) {
            String[] numLine = in.readLine().split(" ");
            int numOfSub = Integer.parseInt(numLine[0]);
            int numOfStd = Integer.parseInt(numLine[1]);

            /*
             * student numbers are always in 3 digits, while subject numbers are not
             * subNum(int) to subNum(String) mapping, index is the int form (0 not used)
             */
            String[] strSubs = new String[numOfSub + 1];
            /* stores subNum : (subName, correctAns), index is the subNum, 0 not used */
            SubAndAns[] subs = new SubAndAns[numOfSub + 1];
            for (int subNum = 1; subNum <= numOfSub; ++subNum) {
                String[] dataLine = in.readLine().split(" ");
                strSubs[subNum] = dataLine[0];
                subs[subNum] = new SubAndAns(dataLine[1], dataLine[2].toCharArray());
            }

            /*  stores stdNum : stdName, index is the stdNum, 0 not used */
            String[] stds = new String[numOfStd + 1];
            for (int stdNum = 1; stdNum <= numOfStd; ++stdNum) {
                String[] dataLine = in.readLine().split(" ");
                stds[stdNum] = dataLine[1];
            }

            /*
             * stores stdNum + subNum : score,
             * trick at using String concatenation as the key
             */
            HashMap<String, Integer> scores = new HashMap<>();
            for (int i = 0; i < numOfStd * numOfSub; ++i) {
                String[] dataLine = in.readLine().split(" ");
                char[] correctAns = subs[Integer.parseInt(dataLine[1])].correctAns;
                char[] ans = dataLine[2].toCharArray();
                scores.put(
                    dataLine[0] + dataLine[1],
                    calculateScore(correctAns, ans)
                );
            }

            /* output formatting: stdNum,stdName,subNum,subName,score */
            for (int stdNum = 1; stdNum <= numOfStd; ++stdNum) {
                String strStdNum = String.format("%03d", stdNum);
                for (int subNum = 1; subNum <= numOfSub; ++subNum) {
                    /* student part */
                    out.write(
                        String.format("%s,%s,", strStdNum, stds[stdNum])
                    );
                    /* subject and score part*/
                    out.write(
                        String.format("%s,%s,%d\n", strSubs[subNum], subs[subNum].subName,
                                                    scores.get(strStdNum + strSubs[subNum]))
                    );

                }
            }
            out.flush();
        }  /* try-with-resources */
    }  /* main */


    /*
     * To save time and memory (not using too many Maps),
     * customized class is used to let a Map stores 3 data.
     */
    static class SubAndAns {
        public final String subName;
        public final char[] correctAns;

        public SubAndAns(final String subName, final char[] correctAns) {
            this.subName = subName;
            this.correctAns = correctAns;
        }
    }


    static int calculateScore(final char[] correctAnswer, final char[] answer) {
        /* counter */
        int correct = 0;
        /* too much not count, not enough no penalty */
        int valids = (answer.length > correctAnswer.length
        ? correctAnswer.length
        : answer.length);
        for (int i = 0; i < valids; ++i) {
            if (answer[i] == correctAnswer[i]) {
                ++correct;
            }
        }
        return (correct * 100 / correctAnswer.length);
    }

}  /* ComputerScoring */
