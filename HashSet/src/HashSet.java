import java.util.*;
public class HashSet {
    public static void main(String[] args) {
        // creating
       HashSet<Integer> set = new HashSet();

        // insert
        set.add(1);
        set.add(2);
        set.add(3);
        set.add(1);

        // Search = contains
        if(set.contains(1)){
            System.out.println("set contains 1");
        }
        if(!set.contains(6)){
            System.out.println("does not contain");
        }
    }
}
