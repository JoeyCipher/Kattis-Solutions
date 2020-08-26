import java.util.*;

//https://open.kattis.com/problems/princesspeach
public class Peach {
   public static void main(String[] args) {
      Scanner in = new Scanner(System.in);
      ArrayList<Integer> obsUnseen = new ArrayList<Integer>();
      Set<Integer> hash = new HashSet<Integer>();

      int known = in.nextInt();
      int seen = in.nextInt();

      for (int i = 0; i < known; i++) {
         obsUnseen.add(i);
      }
      int lost = 0;
      for (int j = 0; j < seen; j++) {
         int seenObj = in.nextInt();
         hash.add(seenObj);
         obsUnseen.set(seenObj, 111);
         lost++;
      }

      Collections.sort(obsUnseen);

      for (int k : obsUnseen) {
         if (k != 111) {
            System.out.println(k);
         }
      }

      System.out.println("Mario got " + hash.size() + " of the dangerous obstacles.");
   }
}