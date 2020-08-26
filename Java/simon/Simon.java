import java.util.*;

//https://open.kattis.com/problems/simon
public class Simon {
   public static void main(String[] args) {
      Scanner in = new Scanner(System.in);

      int testCases;
      String trueCommand;

      testCases = Integer.parseInt(in.nextLine());

      for (int i = 0; i < testCases; i++) {
         ArrayList<String> command = new ArrayList<String>(Arrays.asList(in.nextLine().split(" ")));

         if (command.contains("simon") && command.contains("says")) {
            if (command.get(0).equals("simon") && command.get(1).equals("says")) {
               command.remove(0);
               command.remove(0);
               trueCommand = String.join(" ", command);

               System.out.println(trueCommand);
            } else {
               System.out.println();
            }
         } else {
            System.out.println();
         }
      }
   }
}