// Qsn Description: Count the total number of path to reach from (0,0) to (n,m) in a 2D matrix. The condition is you can only move either down or to the right of the indices else nowhere.

public class Maze_Path_move {
    public static int countPath(int i, int j, int n, int m) {
        if (i == n || j == m) {
            return 0;
        }
        if (i == n - 1 && j == m - 1) {
            return 1;
        }
        // move downwards
        int downPaths = countPath(i + 1, j, n, m);

        // move right
        int rightPath = countPath(i, j + 1, n, m);

        return downPaths + rightPath;
    }

    public static void main(String[] args) {

        int n = 3, m = 3;
        System.out.println(countPath(0, 0, n, m));
    }
}