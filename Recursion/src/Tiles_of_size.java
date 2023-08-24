// Qsn Description: place tiles of size 1*m in a floor of size n*m

public class Tiles_of_size {
    public static int placeTile(int n, int m) {

        if (n == m) {
            return 2;
        }
        if (n < m) {
            return 1;
        }

        // vertically --> n = n-m
        int verticalPlacements = placeTile(n - m, m);

        // horizontally ---> n = n-1
        int horizontalPlacements = placeTile(n - 1, m);

        return verticalPlacements + horizontalPlacements;
    }

    public static void main(String[] args) {
        int totalNumber = placeTile(4, 2);
        System.out.println(totalNumber);
    }

}
