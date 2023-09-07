import java.util.*;

public class BinaryTree {
    static class Node { // represents single element of every tree
        int data;
        Node left;
        Node right;

        Node(int data) {
            this.data = data;
            this.left = null;
            this.right = null;
        }
    }

    static class BinaryTree2 {
        static int idx = -1;

        public static Node buildTree(int nodes[]) { // returns root node
            idx++;
            if (nodes[idx] == -1) {
                return null;
            }

            Node newNode = new Node(nodes[idx]);
            newNode.left = buildTree(nodes);
            newNode.right = buildTree(nodes);
            return newNode;
        }
    }

    public static void preorder(Node root) { // pre-order traversal (order: root->left->right)
        if (root == null) {
            System.out.print("-1 ");
            return;
        }
        System.out.print(root.data + " ");
        preorder(root.left);
        preorder(root.right);

    }

    public static void inorder(Node root) { // inorder traversal (order: left->root->right)
        if (root == null) {
            return;
        }
        inorder(root.left);
        System.out.print(root.data + " ");
        inorder(root.right);
    }

    public static void postorder(Node root) { // postorder (order: left->right->root)
        if (root == null) {
            return;
        }
        postorder(root.left);
        postorder(root.right);
        System.out.print(root.data + " ");
    }

    // Level-order Traversal
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

    // Counting total number of Nodes in a binary tree
    public static int countOfNodes(Node root) {
        if (root == null) {
            return 0;
        }
        int leftSum = countOfNodes(root.left);
        int rightSum = countOfNodes(root.right);
        return leftSum + rightSum + 1;
    }

    // Sum of Nodes
    public static int sumOfNodes(Node root) {
        if (root == null) {
            return 0;
        }
        int leftNodes = 0;
        int rightNodes = 0;
        leftNodes += sumOfNodes(root.left);
        rightNodes += sumOfNodes(root.right);
        return rightNodes + leftNodes + root.data;
    }

    public static int height(Node root) {
        if (root == null) {
            return 0;
        }
        int leftHeight = height(root.left);
        int rightHeight = height(root.right);
        int myHeight = Math.max(leftHeight, rightHeight) + 1;
        return myHeight;
    }

    public static int diameter(Node root) { // N^2 time
        if (root == null) {
            return 0;
        }
        int left = diameter(root.left);
        int right = diameter(root.right);
        int tDiameter = height(root.left) + height(root.right) + 1;
        int dia = Math.max(tDiameter, Math.max(left, right));
        return dia;
    }

    static class TreeInfo {
        int ht;
        int diam;

        TreeInfo(int ht, int diam) {
            this.ht = ht;
            this.diam = diam;
        }
    }

    public static TreeInfo diameter2(Node root) {
        if (root == null) {
            return new TreeInfo(0, 0);

        }
        TreeInfo left = diameter2(root.left);
        TreeInfo right = diameter2(root.right);

        int myHeight = Math.max(left.ht, right.ht) + 1;

        int diam1 = left.diam;
        int diam2 = right.diam;
        int diam3 = left.ht + right.ht + 1;

        int mydiam = Math.max(Math.max(diam1, diam2), diam3);

        TreeInfo myInfo = new TreeInfo(myHeight, mydiam);
        return myInfo;
    }

    public static boolean isIdentical(Node root, Node subRoot) {
        if (root == null && subRoot == null) {
            return true;
        }
        if (root == null || subRoot == null) {
            return false;
        }
        if (root.data == subRoot.data) {
            return isIdentical(root.left, subRoot.left) && isIdentical(root.right, subRoot.right);
        }
        return false;
    }

    public static boolean isSubtree(Node root, Node subRoot) {
        if (subRoot == null) {
            return true;
        }
        if (root == null) {
            return false;
        }
        if (root.data == subRoot.data) {
            if (isIdentical(root, subRoot))
                ;
            return true;
        }
        return isSubtree(root.left, subRoot) || isSubtree(root.right, subRoot);
    }

    public static void main(String[] args) {
        int node[] = { 1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1 };
        int subNode[] = { 3, -1, 6, -1, -1 };
        BinaryTree2 tree = new BinaryTree2();
        BinaryTree2 tree2 = new BinaryTree2();
        Node root = tree.buildTree(node);
        Node subRoot = tree2.buildTree(subNode);
        // System.out.println(root.data);
        // root.left.left.data = 9;
        // preorder(root);
        // inorder(root);
        // postorder(root);
        // levelorder(root);
        // System.out.println(countOfNodes(root) + " ");
        // System.out.println(sumOfNodes(root));
        // System.out.println(height(root));
        // System.out.println(diameter(root));
        // System.out.println(diameter2(root).diam);
        System.out.println(isSubtree(root, subRoot));
        // System.out.println();
    }
}