import java.util.*;

public class Abc {
   public static void main(String[] args) {
      Scanner in = new Scanner(System.in);
      TreeSet<Integer> order = new TreeSet<Integer>();
      TreeMap<Character, Integer> letter = new TreeMap<Character, Integer>();
      String output, givenOrder;

      for (int i = 0; i < 3; i++) {
         order.add(in.nextInt());
      }
      
      in.nextLine();
      givenOrder = in.nextLine();
      
      letter.put('A', order.first());
      order.pollFirst();
      letter.put('B', order.first());
      letter.put('C', order.last());


      output = letter.get(givenOrder.charAt(0)) + " ";
      output += letter.get(givenOrder.charAt(1)) + " ";
      output += letter.get(givenOrder.charAt(2));

      System.out.println(output);
   }
}