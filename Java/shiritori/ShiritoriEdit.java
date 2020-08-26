import java.util.*;

public class ShiritoriEdit {
   public static void main(String[] args) {
      Scanner in = new Scanner(System.in);
      ArrayList<String> list = new ArrayList<String>();

      int cases = Integer.parseInt(in.nextLine());

      for (int i = 0; i < cases; i++) {
         String curr = in.nextLine();

         if (list.contains(curr)) {
            if (i % 2 == 0) {
               System.out.println("Player 1 lost");
            } else {
               System.out.println("Player 2 lost");
            }
            break;
         }

         list.add(curr);

         if (i == cases - 1) {
            int round = 1;
            boolean fair = true;

            for (int k = 0; k < cases; k++) {
               if (k == 0) {
                  continue;
               }

               String lLine = list.get(k - 1);
               int index = lLine.length() - 1;
               char lLetter = lLine.charAt(index);

               if (lLetter != list.get(k).charAt(0)) {
                  fair = false;
                  break;
               }

               round++;
            }
            /*
            int round2 = 1;

            for (int j = 0; j < cases; j++) {
               String word = list.get(j);
               for (int k = j - 1; k >= 0; k--) {
                  if (word.equals(list.get(k))) {
                     fair = false;
                     break;
                  }
               }
               round2++;
            }
            int round;
            
            if (round1 < round2) {
               round = round1;
            } else {
               round = round2;
            }
            */
            String output = "";
            if (fair) {
               output = "Fair Game";

            } else if (round % 2 == 0) {
               output = "Player 1 lost";

            } else {
               output = "Player 2 lost";
            }
            System.out.println(output);
         }
      }
   }
}