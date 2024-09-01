import java.util.*;

public class Solution {
    public static void main(String[] args) {
        try (Scanner scanner = new Scanner(System.in)) {
            int testCases = scanner.nextInt();
            int i = 0;
            while (i < testCases) {
                String patientDNA = scanner.next();
                String virusDNA = scanner.next();
                List<Integer> matchingIndices = getMatchingIndices(patientDNA, virusDNA);
                printMatchingIndices(matchingIndices);
                i++;
            }
        }
    }

    public static List<Integer> getMatchingIndices(String patientDNA, String virusDNA) {
        int patientLength = patientDNA.length();
        int virusLength = virusDNA.length();
        List<Integer> matchingIndices = new ArrayList<>();
        if (virusLength > patientLength) {
            return matchingIndices;
        }
        int i = 0;
        while (i <= patientLength - virusLength) {
            int mismatches = countMismatches(patientDNA, virusDNA, i);
            if (mismatches <= 1) {
                matchingIndices.add(i);
            }
            i++;
        }
        return matchingIndices;
    }

    public static int countMismatches(String patientDNA, String virusDNA, int startIndex) {
        int mismatches = 0;
        int virusLength = virusDNA.length();
        for (int j = 0; j < virusLength; j++) {
            if (patientDNA.charAt(startIndex + j) != virusDNA.charAt(j)) {
                mismatches++;
            }
            if (mismatches > 1) {
                break;
            }
        }
        return mismatches;
    }

    public static void printMatchingIndices(List<Integer> matchingIndices) {
        if (!matchingIndices.isEmpty()) {
            System.out.println(matchingIndices.toString().replaceAll("[\\[\\],]", ""));
        } else {
            System.out.println("No Match!");
        }
    }
}
