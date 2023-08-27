import java.util.Stack;

public class StackCollection {
    public static void main(String[] args) {
        Stack<Integer> S = new Stack<Integer>();
        S.push(1);
        S.push(2);
        S.push(3);
        S.push(4);
        S.push(5);

        while (!S.isEmpty()) {
            System.out.println(S.peek());
            S.pop();
        }
    }

}
