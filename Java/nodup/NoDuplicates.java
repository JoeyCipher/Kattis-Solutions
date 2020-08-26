import java.util.*;

public class NoDuplicates {
   public static void main(String[] args) {
      Scanner in = new Scanner(System.in);

      String[] line = in.nextLine().split(" ");
      int length = line.length;

      System.out.println(search(line, length));
   }

   public static String search(String[] line, int length) {
      
      for(int i = 0; i < length; i++){
         String curr = line[i];
         for (int j = 0; j < length; j++) {
            if (curr.equals(line[j]) && i != j)
               return "no";
         }
      }
      
      return "yes";
   }
}