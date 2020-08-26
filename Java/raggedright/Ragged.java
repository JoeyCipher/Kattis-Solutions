import java.util.*;
import java.io.*;

public class Ragged {
   public static void main(String[] args) throws NoSuchElementException {
      Scanner in = new Scanner(System.in);
      ArrayList<String> list = new ArrayList<String>();
      int n = 0, score = 0;
      String line = "";

      while (in.hasNext()) {
         line = in.nextLine();

         list.add(line);
      }

      for (String find : list) {
         if (n < find.length()) {
            n = find.length();
         }
      }

      int index = list.size() - 1;
      list.remove(index);

      for (String yup : list) {
         score += Math.pow((n - yup.length()), 2);
      }

      System.out.println(score);
   }
}