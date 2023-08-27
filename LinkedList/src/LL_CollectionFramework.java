import java.util.LinkedList;

public class LL_CollectionFramework {
    public static void main(String[] args) {
        LinkedList<String> list = new LinkedList<String>();

        // list.add("Hello");
        // list.add("World");

        list.addFirst("a");
        list.addFirst("is");
        list.add("list");
        System.out.println(list);

        for (String item : list) {
        System.out.print(item+" -> ");
        }
        System.out.print("NULL");
        System.out.println();

        System.out.println(list.size());

        list.remove(2);
        System.out.println(list);
    }
}
