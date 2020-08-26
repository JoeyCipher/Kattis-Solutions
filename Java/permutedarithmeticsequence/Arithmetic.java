import java.util.*;

public class Arithmetic {
   public static void main(String[] args) {
      Scanner in = new Scanner(System.in);

      int testCases, length, spacing;
      boolean arithmetic, permutated;

      testCases = in.nextInt();

      for (int i = 0; i < testCases; i++) {
         ArrayList<Integer> sequence = new ArrayList<Integer>();
         length = in.nextInt();

         for (int j = 0; j < length; j++) {
            sequence.add(in.nextInt());
         }
         arithmetic = true;
         spacing = (sequence.get(0) - sequence.get(1));

         for (int k = 0; arithmetic && k < length; k++) {
            if (k == 0 || k == 1) {
               continue;
            } else {
               if (sequence.get((k - 1)) - sequence.get(k) == spacing) {
                  continue;
               } else {
                  arithmetic = false;
               }
            }
         }
         permutated = true;
         
         if (arithmetic == false) {
            Collections.sort(sequence);
            spacing = (sequence.get(0) - sequence.get(1));

            for (int l = 0; permutated && l < length; l++) {
               if (l == 0 || l == 1) {
                  continue;
               } else {
                  if (sequence.get((l - 1)) - sequence.get(l) == spacing) {
                     continue;
                  } else {
                     permutated = false;
                  }
               }
            }
         }


         if (arithmetic) {
            System.out.println("arithmetic");
         } else if (arithmetic == false && permutated == true) {
            System.out.println("permuted arithmetic");
         } else {
            System.out.println("non-arithmetic");
         }
      }
   }
}