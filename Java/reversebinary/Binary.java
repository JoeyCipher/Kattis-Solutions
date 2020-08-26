import java.util.*;

//https://open.kattis.com/problems/reversebinary
public class Binary {
   public static void main(String[] args) {
      Scanner in = new Scanner(System.in);
      ArrayList<Character> charList = new ArrayList<Character>();
      String secondBin = "";

      int first = in.nextInt();
      String firstBin = Integer.toBinaryString(first);

      for (int i = 0; i < firstBin.length(); i++) {
         charList.add(firstBin.charAt(i));
      }

      Collections.reverse(charList);

      for (int j = 0; j < charList.size(); j++) {
         secondBin += charList.get(j);
      }

      int second = Integer.parseInt(secondBin, 2);

      System.out.println(second);
   }
}