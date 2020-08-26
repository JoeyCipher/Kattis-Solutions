import java.util.Scanner;

public class BatterUp {
   public static void main(String[] args) {
      Scanner in = new Scanner(System.in);

      int bats = in.nextInt();
      int score = 0;

      for (int i = bats; i != 0; i--) {
         int bases = in.nextInt();

         if (bases == -1) {
            bats--;
         } else {
            score += bases;
         }
      }

      double slug = (double) score / (double) bats;

      System.out.println(slug);
   }
}