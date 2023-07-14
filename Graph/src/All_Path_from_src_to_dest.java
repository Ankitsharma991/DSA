import java.util.ArrayList;

public class All_Path_from_src_to_dest {
    static class Edge {
        int src;
        int dest;

        Edge(int src, int dest) {
            this.src = src;
            this.dest = dest;
        }
    }

    public static void createGraph(ArrayList<Edge> graph[]) {
        for (int i = 0; i < graph.length; i++) {
            graph[i] = new ArrayList<Edge>();
        }
        graph[0].add(new Edge(0, 1));
        graph[0].add(new Edge(0, 2));

        graph[0].add(new Edge(1, 0));
        graph[0].add(new Edge(1, 3));

        graph[0].add(new Edge(2, 0));
        graph[0].add(new Edge(2, 4));

        graph[0].add(new Edge(3, 1));
        graph[0].add(new Edge(3, 4));
        graph[0].add(new Edge(3, 5));

        graph[0].add(new Edge(4, 2));
        graph[0].add(new Edge(4, 3));
        graph[0].add(new Edge(4, 5));

        graph[0].add(new Edge(5, 3));
        graph[0].add(new Edge(5, 4));
        graph[0].add(new Edge(5, 6));
    }

    // public static void dfs(ArrayList<Edge> graph[], int curr, boolean visited[])
    // {
    // System.out.print(curr + " ");
    // visited[curr] = true;

    // for (int i = 0; i < graph[curr].size(); i++) {
    // Edge e = graph[curr].get(i);
    // if (visited[e.dest] == false) {
    // dfs(graph, e.dest, visited);
    // }
    // }
    // }

    public static void printAllPath(ArrayList<Edge> graph[], boolean visited[], int curr, String path, int tar) {
        if (curr == tar) {
            System.out.println(path);
            return;
        }

        for (int i = 0; i < graph[curr].size(); i++) {
            Edge e = graph[curr].get(i);
            if (!visited[e.dest]) {
                visited[curr] = true;
                printAllPath(graph, visited, e.dest, path + e.dest, tar);
                visited[curr] = false;
            }
        }
    }

    public static void main(String[] args) {
        int v = 7;
        int src = 0;
        int tar = 5;
        ArrayList<Edge> graph[] = new ArrayList[v];
        createGraph(graph);

        printAllPath(graph, new boolean[v], src, "0", tar);
    }
}