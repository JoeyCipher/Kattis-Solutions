import java.util.Scanner;
import java.util.LinkedList;

public class Parket {
   public static void main(String[] args) {
      Scanner in = new Scanner(System.in);
      LinkedList<Integer> factors = new LinkedList<Integer>();

      int r, b, first, last;

      r = in.nextInt();
      b = in.nextInt();

      for (int i = 1; i <= b; i++) {
         if (b % i == 0) {
            factors.add(i);
         }
      }

      do {
         first = factors.getFirst();
         last = factors.getLast();

         if (((last + 2) * (first + 2)) == (r + b)) {
            System.out.println((last + 2) + " " + (first + 2));
         } else {
            factors.removeFirst();
            factors.removeLast();
         }
      } while (((last + 2) * (first + 2)) != (r + b));
   }
}