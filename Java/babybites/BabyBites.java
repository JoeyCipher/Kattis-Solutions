import java.util.*;

public class BabyBites {
   public static void main(String[] args) {

      Scanner userInput = new Scanner(System.in);

      int goal = 0;
      String speak = "";
      String[] mum = {};

      goal = userInput.nextInt();
      userInput.nextLine();
      speak = userInput.nextLine();

      mum = speak.split(" ", goal);
      boolean sense = true;

      for (int i = 0; i < mum.length; ++i){
         
         boolean mmm = mum[i].equals("mumble");

         if (mmm) {
         } else if (Integer.parseInt(mum[i]) == i + 1) {
         } else {
            sense = false;
         }
      }
      if (sense) {
         System.out.println("makes sense");
      } else {
         System.out.println("something is fishy");
      }
   }
}