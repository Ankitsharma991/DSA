// Qsn: All Possible Arrangements

public class Possible_Permutations {
    public static void printPerm(String str, String perm, int idx) {

        if (str.length() == 0) {
            System.out.print(perm + " ");
            return;
        }

        for (int i = 0; i < str.length(); i++) {
            char currChar = str.charAt(i);
            String newStr = str.substring(0, i) + str.substring(i + 1);
            printPerm(newStr, perm + currChar, idx + 1);
        }
    }

    public static void main(String[] args) {
        String str = "ABC";
        printPerm(str, "", 0);
        System.out.println();
        // Time complexity: O(N*N!)
    }
}
