import java.util.HashMap;

public class ItineraryFromTickets {
    public static void solution(HashMap<String, String> map) {
        HashMap<String, String> revMap = new HashMap<>();
        String from;
        for (String key : map.keySet()) {
            revMap.put(map.get(key), key);
        }

        for (String key : map.keySet()) {
            if (!revMap.containsKey(key)) {
                from = key;
                while (map.containsKey(from)) {
                    System.out.print(from+" -> ");
                    from = map.get(from);
                }
                System.out.println(from);
            }
        }

    }

    public static void main(String[] args) {
        HashMap<String, String> map = new HashMap<>();
        map.put("Chennai", "Bengaluru");
        map.put("Goa", "Chennai");
        map.put("Mumbai", "Delhi");
        map.put("Delhi", "Goa");

        solution(map);
    }
}
