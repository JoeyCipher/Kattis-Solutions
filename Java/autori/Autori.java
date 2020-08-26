import java.util.Scanner;

public class Autori {
   public static void main(String[] args) {
      Scanner in = new Scanner(System.in);

      String input = in.nextLine();
      String[] abv = input.split("-");
      String output = "";
   
      for (int i = 0; i < abv.length; i++) {
         output += abv[i].charAt(0);
      }

      System.out.println(output);
   }
}