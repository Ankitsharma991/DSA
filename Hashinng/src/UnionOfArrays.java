import java.util.HashSet;

public class UnionOfArrays {
    public static void findUnion(int arr1[], int arr2[]){
        int n1 = arr1.length;
        int n2 = arr2.length;

        HashSet<Integer> set = new HashSet<>();
        for(int i=0; i< n1 ;i++){
            set.add(arr1[i]);
        }
        for(int j=0; j<n2;j++){
            set.add(arr2[j]);
        }

        System.out.println(set.size());
    }
    public static void main(String[] args) {
        int arr1[] = {7,3,9};
        int arr2[] = {6,3,9,2,9,4};

        findUnion(arr1, arr2);
    }
}
