import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.function.*;
import java.util.regex.*;
import java.util.stream.*;
import static java.util.stream.Collectors.joining;
import static java.util.stream.Collectors.toList;

class Result {

    /*
     * Complete the 'biggerIsGreater' function below.
     *
     * The function is expected to return a STRING.
     * The function accepts STRING w as parameter.
     */

    public static String biggerIsGreater(String w) {
        char[] charArray = w.toCharArray();
        int n = charArray.length;
        int endIndex = 0;

        // Start from the right most character and find the first character
        // that is smaller than previous character.
        for (endIndex = n - 1; endIndex > 0; endIndex--) {
            if (charArray[endIndex] > charArray[endIndex - 1]) {
                break;
            }
        }

        // If no such char found, then all characters are in descending order
        // means there cannot be a greater string with same set of characters
        if (endIndex == 0) {
            return "no answer";
        } else {
            int firstSmallChar = charArray[endIndex - 1], nextSmallChar = endIndex;

            // Find the smallest character on right side of (endIndex - 1)'th
            // character that is greater than charArray[endIndex - 1]
            for (int startIndex = endIndex + 1; startIndex < n; startIndex++) {
                if (charArray[startIndex] > firstSmallChar && 
                charArray[startIndex] < charArray[nextSmallChar]) {
                    nextSmallChar = startIndex;
                }
            }

            //Swap the above found next smallest character with charArray[endIndex - 1]
            swap(charArray, endIndex - 1, nextSmallChar);

            //Sort the charArray after (endIndex - 1)in ascending order
            Arrays.sort(charArray, endIndex , n);

        }
        return new String(charArray);
    }


    static void swap(char charArray[], int i, int j) {
        char temp = charArray[i];
        charArray[i] = charArray[j];
        charArray[j] = temp;
    }

}

public class Solution {
    public static void main(String[] args) throws IOException {
        BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bufferedWriter = new BufferedWriter(new FileWriter(System.getenv("OUTPUT_PATH")));

        int T = Integer.parseInt(bufferedReader.readLine().trim());

        IntStream.range(0, T).forEach(TItr -> {
            try {
                String w = bufferedReader.readLine();

                String result = Result.biggerIsGreater(w);

                bufferedWriter.write(result);
                bufferedWriter.newLine();
            } catch (IOException ex) {
                throw new RuntimeException(ex);
            }
        });

        bufferedReader.close();
        bufferedWriter.close();
    }
}
