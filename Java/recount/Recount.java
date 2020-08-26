import java.util.*;

public class Recount {
   public static void main(String[] args) {
      Scanner in = new Scanner(System.in);
      HashMap<String, Integer> totalVotes = new HashMap<String, Integer>();
      LinkedList<String> list = new LinkedList<String>();
      String tempName, can1, can2;
      boolean runoff;

      do {
         tempName = in.nextLine();
         if (!tempName.equals("***")) {
            if (totalVotes.containsKey(tempName)) {
               totalVotes.replace(tempName, (totalVotes.get(tempName) + 1));
            } else {
               totalVotes.put(tempName, 1);
               list.push(tempName);
            }
         }
      } while (!tempName.equals("***"));

      for (int i = 0; i < list.size() + 3; i++) {
         can1 = list.pop();
         can2 = list.pop();

         if (totalVotes.get(can1) > totalVotes.get(can2)) {
            totalVotes.remove(can2, totalVotes.get(can2));
            list.push(can1);
         } else if (totalVotes.get(can1) < totalVotes.get(can2)) {
            totalVotes.remove(can1, totalVotes.get(can1));
            list.push(can2);
            runoff = false;
         } else if (totalVotes.get(can1) == totalVotes.get(can2)) {
            runoff = true;
            totalVotes.remove(can2, totalVotes.get(can2));
            list.push(can1);
         }
      }

      String winner = totalVotes.keySet().toString();
      System.out.println(winner);
   }
}