import java.util.HashSet;

public class IntersectionOfArrays {
    public static void findIntersection(int arr1[], int arr2[]) {
        HashSet<Integer> set1 = new HashSet<>();

        int n1 = arr1.length;
        int n2 = arr2.length;

        for (int i = 0; i < n1; i++) {
            set1.add(arr1[i]);
        }

        int count = 0;
        for(int j=0; j<n2;j++){
            if(set1.contains(arr2[j])){
                count++;
                System.out.print(arr2[j]+" ");
                set1.remove(arr2[j]);
            }
        }
        System.out.println();
        System.out.println(count);
    }

    public static void main(String[] args) {
        int arr1[] = {7,3,9};
        int arr2[] = {6,3,9,2,9,4};

        findIntersection(arr1, arr2);   
    }
}
