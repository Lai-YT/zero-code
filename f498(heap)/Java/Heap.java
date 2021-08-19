import java.io.BufferedWriter;
import java.io.IOException;
import java.io.OutputStreamWriter;
import java.util.Scanner;


public class Heap {
    public static void main(String[] args) throws IOException {
        Scanner in = new Scanner(System.in);
        try (BufferedWriter out = new BufferedWriter(new OutputStreamWriter(System.out))) {
            while (in.hasNext()) {
                final int size = in.nextInt();
                /* remain index 0 zero and not used */
                int[] minHeap = new int[size + 1];
                int[] maxHeap = new int[size + 1];
                /* just to clean trash */
                minHeap[0] = 0;
                maxHeap[0] = 0;
                /* start building heaps */
                for (int i = 1; i <= size; ++i) {
                    /* read the number */
                    minHeap[i] = maxHeap[i] = in.nextInt();
                    /* adjust */
                    minHeapInsertion(minHeap, i);
                    maxHeapInsertion(maxHeap, i);
                }
                /* output in level order */
                for (int i = 1; i <= size; ++i) {
                    out.write(String.valueOf(minHeap[i]) + ' ');
                }
                out.write('\n');
                for (int i = 1; i <= size; ++i) {
                    out.write(String.valueOf(maxHeap[i]) + ' ');
                }
                out.write('\n');
            }  /* while-loop */
        }  /* main */
    }

    static int parentOf(final int i) {
        return i >> 1;
    }

    static void swap(int[] array, final int i, final int j) {
        int temp = array[i];
        array[i] = array[j];
        array[j] = temp;
    }

    static void minHeapInsertion(int[] minHeap, int i) {
        while (i > 1 && minHeap[i] < minHeap[parentOf(i)]) {
            swap(minHeap, i, parentOf(i));
            i = parentOf(i);
        }
    }

    static void maxHeapInsertion(int[] maxHeap, int i) {
        while (i > 1 && maxHeap[i] > maxHeap[parentOf(i)]) {
            swap(maxHeap, i, parentOf(i));
            i = parentOf(i);
        }
    }
}
