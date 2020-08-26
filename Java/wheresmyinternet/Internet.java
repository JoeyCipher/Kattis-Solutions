import java.util.*;

public class Internet {
   static int[] parents;

   public static void union(int a, int b) {
      parents[find(a)] = find(b);
   }

   public static int find(int a) {
      int parentA = parents[a];

      if (parentA == a) {
         return a;
      }

      parents[a] = find(parentA);
      return parents[a];
   }

   public static void main(String[] args) {

      Scanner in = new Scanner(System.in);

      int cables, houses;
      StringBuilder output = new StringBuilder("");
      boolean connected = true;

      houses = in.nextInt();
      cables = in.nextInt();
      parents = new int[houses];

      for (int i = 0; i < houses; i++) {
         parents[i] = i;
      }

      for (int j = 0; j < cables; j++) {
         int aa = in.nextInt();
         int bb = in.nextInt();

         union(aa - 1, bb - 1);
      }

      for (int k = 0; k < houses; k++) {
         if (find(k) != find(0)) {
            output.append((k + 1) + "\n");
            connected = false;
         }
      }

      if (connected) {
         System.out.println("Connected");
      } else {
         System.out.print(output);
      }
   }
}