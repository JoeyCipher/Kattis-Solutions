import java.util.Scanner;

public class Symmetry {
   public static void main(String[] args) {
      Scanner in = new Scanner(System.in);

      int n = in.nextInt();
      in.nextLine();
      int set = 1;

      while (n != 0) {
         System.out.println("SET " + set++);
         String[] names = new String[n];
         String[] list = new String[n];

         for (int i = 0; i < n; i++) {
            names[i] = in.nextLine();
         }
         
         int top = 0;
         int bot = n - 1;

         for (int j = 0; j < n; j++) {
            if (j % 2 == 0) {
               list[top] = names[j];
               top++;
            } else {
               list[bot] = names[j];
               bot--;
            }
         }

         for (String name : list) {
            System.out.println(name);
         }
         n = in.nextInt();
         in.nextLine();
      }
      in.close();
   }
}