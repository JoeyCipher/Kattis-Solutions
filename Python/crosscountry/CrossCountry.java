import java.util.ArrayList;
import java.util.LinkedList;
import java.util.Scanner;

public class CrossCountry {
   public class Info implements Comparable<Info> {
      int loc;
      ArrayList<Integer> vis;
      int min;

      public Info(int location, ArrayList<Integer> visited, int minutes) {
         loc = location;
         vis = visited;
         min = minutes;
      }

      public int compareTo(Info that) {
         return this.min - that.min;
      }
   }

   public static void main(String[] args) {
      Scanner in = new Scanner(System.in);

      String[] nst = in.nextLine().split(" ");

      int n = Integer.parseInt(nst[0]);
      int car = Integer.parseInt(nst[1]);
      int dest = Integer.parseInt(nst[2]);
      int[][] grid = new int[n][n];
      LinkedList<Info> queue = new LinkedList<Info>();

      for (int x = 0; x < n; x++) {
         String[] line = in.nextLine().split(" ");
         for (int y = 0; y < n; y++) {
            grid[x][y] = Integer.parseInt(line[y]);
         }
      }
      in.close();

      queue.push(new Info(car, new ArrayList<Integer>(), 0));
   }  
}