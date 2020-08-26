import java.util.*;

public class Kitten {
   public static void main(String[] args) {
      Scanner in = new Scanner(System.in);
      HashMap<Integer, ArrayList<Integer>> map = new HashMap<Integer, ArrayList<Integer>>();
      ArrayList<Integer> roots = new ArrayList<Integer>();
      ArrayList<String> path = new ArrayList<String>();
      
      int host;
      int kitten;
      int search;

      boolean kat = false;
      int root = 0;
      int j = 0;
      int k = 0;

      kitten = Integer.parseInt(in.nextLine());

      while (0 == 0) {
         String[] branch = in.nextLine().split(" ");
         host = Integer.parseInt(branch[0]);

         if (host == -1) {
            break;
         }

         if (j == 0) {
            root = host;
            j++;
         }

         roots.add(host);
         map.put(host, new ArrayList<Integer>());

         for (int i = 1; i < branch.length; i++) {
            map.get(host).add(Integer.parseInt(branch[i]));
         }
      }

      search = kitten;
      path.add(Integer.toString(kitten));
      
      while (!kat) {
         if (root == Integer.parseInt(path.get(path.size() - 1))) {
            kat = true;
            break;
         }

         if (map.get(roots.get(k)).contains(search)) {
            search = roots.get(k);
            path.add(Integer.toString(roots.get(k)));
            k = 0;
         } else {
            k++;
         }
      }

      System.out.println(String.join(" ", path));
   }
}