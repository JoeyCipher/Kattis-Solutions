import java.util.Scanner;

public class Volim {
   public static void main(String[] args) {
      Scanner in = new Scanner(System.in);

      int start = in.nextInt();
      int cases = in.nextInt();
      int time = 0;
      int player = start;

      for (int i = 0; i < cases; i++) {
         time += in.nextInt();
         char ans = in.next().charAt(0);

         if (time >= 210) {
            break;
         }

         if (ans == 'T') {
            player++;

            if (player > 8) {
               player = 1;
            }
         }
      }

      System.out.println(player);
   }
}