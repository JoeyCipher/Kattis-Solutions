import java.util.*;

public class Water {
   public static void main(String[] args) {
      Scanner in = new Scanner(System.in);
      HashSet<String> set = new HashSet<String>();

      String houseCon = in.nextLine();
      int houses = (houseCon.charAt(0) - 48);
      int connections = (houseCon.charAt(2) - 48);
      int firstDisconnected = 0;
      boolean allConnected = true;
      String output = "";

      for (int i = 0; i < connections; i++) {
         String connected = in.nextLine();

         set.add(connected);
      }

      for (int j = 1; j <= connections; j++) {
         String needed1 = (j) + " " + (j + 1);
         String needed2 = (j + 1) + " " + (j);
         if (set.contains(needed1) || set.contains(needed2)) {
            continue;
         }

         j++;
         allConnected = false;
         firstDisconnected = j;
         break;
      }

      if (!allConnected) {
         for (int k = firstDisconnected; k <= houses; k++) {
            output += k + "\n";
         }

         System.out.print(output);
      } else {
         System.out.println("Connected");
      }
   }
}