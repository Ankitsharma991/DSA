import java.util.*;

public class BST {
    static class Node {
        int data;
        Node left;
        Node right;

        Node(int data) {
            this.data = data;
            this.left = null;
            this.right = null;
        }
    }

    public static Node insert(Node root, int val) {
        if (root == null) {
            root = new Node(val);
            return root;
        }

        if (root.data > val) {
            root.left = insert(root.left, val);
        } else {
            root.right = insert(root.right, val);
        }
        return root;
    }

    public static void inorder(Node root) {
        if (root == null) {
            return;
        }
        inorder(root.left);
        System.out.print(root.data + " ");
        inorder(root.right);

    }

    public static void preorder(Node root) {
        if (root == null) {
            return;
        }
        System.out.print(root.data + " ");
        preorder(root.left);
        preorder(root.right);
    }

    public static void postorder(Node root) {
        if (root == null) {
            return;
        }
        postorder(root.left);
        postorder(root.right);
        System.out.print(root.data + " ");
    }

    public static void levelorder(Node root) {
        if (root == null) {
            return;
        }

        Queue<Node> q = new LinkedList<>();
        q.add(root);
        q.add(null);

        while (!q.isEmpty()) {
            Node currNode = q.remove();
            if (currNode == null) {
                System.out.println();
                if (q.isEmpty()) {
                    break;
                } else {
                    q.add(null);
                }
            } else {
                System.out.print(currNode.data + " ");
                if (currNode.left != null) {
                    q.add(currNode.left);
                }
                if (currNode.right != null) {
                    q.add(currNode.right);
                }
            }
        }

    }

    public static void search(Node root, int key) {
        if (root == null) {
            System.out.println("Element doesn't found!!");
            return;
        }
        if (root.data == key) {
            System.out.print("Element Found!!\n");
            return;
        } else if (root.data > key) {
            search(root.left, key);
        } else if (root.data < key) {
            search(root.right, key);
        } else {
            System.out.print("Elements doesn't found!!\n");
        }
    }

    public static Node delete(Node root, int key) {
        if (root.data > key) {
            root.left = delete(root.left, key);
        } else if (root.data < key) {
            root.right = delete(root.right, key);
        } else {
            // removing root.data == key element from the tree
            // case-1
            if (root.left == null && root.right == null) {
                return null;
            }
            // case-2
            if (root.left == null) {
                return root.right;
            } else if (root.right == null) {
                return root.left;
            }
            // case-3
            Node IS = inorderSuccessor(root.right);
            root.data = IS.data;
            root.right = delete(root.right, IS.data);

        }
        return root;
    }

    public static Node inorderSuccessor(Node root) {
        while (root.left != null) {
            root = root.left;
        }
        return root;
    }

    public static void printInRange(Node root, int X, int Y) {
        if (root.data >= X && root.data <= Y) {
            printInRange(root.left, X, Y);
            System.out.print(root.data + " ");
            printInRange(root.right, X, Y);
        } else if (root.data >= Y) {
            printInRange(root.left, X, Y);
        } else {
            printInRange(root.right, X, Y);
        }
    }

    public static void printPath(ArrayList<Integer> path) {
        for (int i = 0; i < path.size(); i++) {
            System.out.print(path.get(i) + "->");
        }
        System.out.println();
    }

    public static void printRoot2Leaf(Node root, ArrayList<Integer> path) {
        if (root == null) {
            return;
        }
        path.add(root.data);

        if (root.left == null && root.right == null) {
            printPath(path);
        } else {
            printRoot2Leaf(root.left, path);
            printRoot2Leaf(root.right, path);

        }
        path.remove(path.size() - 1);
    }

    public static void main(String[] args) {
        int values[] = { 8, 5, 3, 6, 10, 11, 14 };
        Node root = null;

        for (int i = 0; i < values.length; i++) {
            root = insert(root, values[i]);
        }

        // System.out.print("Preorder => ");
        // preorder(root);
        // System.out.println();
        // System.out.print("Inorder => ");
        // inorder(root);
        // System.out.println();
        // System.out.print("PostOrder => ");
        // postorder(root);
        // System.out.println();
        // System.out.print("LevelOrder => \n");
        // levelorder(root);
        // System.out.println();

        // Scanner sc = new Scanner(System.in);
        // System.out.print("Enter the key to search in the tree : ");
        // int key = sc.nextInt();
        // search(root, key);
        // System.out.println();
        // sc.close();

        // delete(root, 10);
        // inorder(root);

        printRoot2Leaf(root, new ArrayList<>());
    }

}