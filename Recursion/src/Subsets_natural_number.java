// Question : Print all the subsets of a first n natural numbers

import java.util.ArrayList;

public class Subsets_natural_number {

    public static void printSubset(ArrayList<Integer> subset) {
        for (int i = 0; i < subset.size(); i++) {
            System.out.print(subset.get(i));
        }
        System.out.print(" ");
    }

    public static void findSubsets(int n, ArrayList<Integer> subset) {
        if (n == 0) {
            printSubset(subset);
            return;
        }

        // on adding
        subset.add(n);
        findSubsets(n - 1, subset);

        // on not adding
        subset.remove(subset.size() - 1);
        findSubsets(n - 1, subset);
    }

    public static void main(String[] args) {
        int n = 3;
        ArrayList<Integer> subset = new ArrayList<>();
        findSubsets(n, subset);
        System.out.println();
    }

}
