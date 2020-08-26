import java.util.*;

public class PeaSoup {
   public static void main(String[] args) {
      Scanner in = new Scanner(System.in);
      TreeMap<String, ArrayList<String>> map = new TreeMap<String, ArrayList<String>>();
      ArrayList<String> names = new ArrayList<String>();

      int testCases, dishes;
      String destination = "nothing";

      testCases = Integer.parseInt(in.nextLine());

      for (int i = 0; i < testCases; i++) {
         dishes = Integer.parseInt(in.nextLine());
         names.add(in.nextLine());

         ArrayList<String> arrayList = new ArrayList<String>();

         for (int j = 0; j < dishes; j++) {
            arrayList.add(in.nextLine());
         }

         map.put(names.get(i), arrayList);
      }

      for (int k = 0; k < testCases; k++) {
         if (map.get(names.get(k)).contains("pea soup") && map.get(names.get(k)).contains("pancakes")) {
            destination = names.get(k);
            System.out.println(destination);
            break;
         } else {
            continue;
         }
      }

      if (destination.equals("nothing")) {
         System.out.println("Anywhere is fine I guess");
      }
   }
}