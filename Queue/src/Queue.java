public class Queue {
    public static class QueueY {
        static int arr[];
        static int size;
        static int rear = -1;

        QueueY(int n) {
            arr = new int[n];
            this.size = n;
        }

        public static boolean isEmpty() {
            return rear == -1;
        }

        // enqueue
        public static void add(int data) { // O(1)
            if (rear == size - 1) {
                System.out.println("Queue if full!!");
                return;
            }
            rear++;
            arr[rear] = data;
        }

        // Dequeue
        public static int remove() { // O(n)
            if (isEmpty()) {
                System.out.println("Queue is empty!!");
                return -1;
            }
            int front = arr[0];
            for (int i = 0; i < rear; i++) {
                arr[i] = arr[i + 1];
            }
            rear--;
            return front;
        }

        // Peek
        public static int peek() {
            if (isEmpty()) {
                System.out.println("Queue is empty!!");
                return -1;
            }
            return arr[0];
        }
    }

    public static void main(String[] args) {
        QueueY q = new QueueY(5);
        q.add(1);
        q.add(2);
        q.add(3);
        q.add(4);
        q.add(5);

        while (!q.isEmpty()) {
            System.out.println(q.peek());
            q.remove();
        }
    }
}
