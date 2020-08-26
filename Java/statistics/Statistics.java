import java.util.*;

public class Statistics {
   public static void main(String[] args) {
      Scanner in = new Scanner(System.in);
      LinkedList<Integer> testCase = new LinkedList<Integer>();
      
      String testName;
      String[] caseNums;
      int[] intTemp;
      int n;
      int min = 0;
      int max = 0;
      int sampleNumber;
      int i = 0;

      do {
         testName = "Case " + (i + 1) + ": ";
         caseNums = in.nextLine().split(" ");
         n = Integer.parseInt(caseNums[0]);

         while (n > 0) {
            testCase.push(Integer.parseInt(caseNums[n]));
            n--;
         }

         min = testCase.pop();
         max = min;
         sampleNumber = Integer.parseInt(caseNums[0]);

         for (int j = 1; j < sampleNumber; j++) {
            if (min > testCase.peek()) min = testCase.pop();
            else if (max < testCase.peek()) max = testCase.pop();
            else testCase.pop();
         }   

         System.out.println(testName + min + " " + max + " " + (max - min));

         i++;
      } while (in.hasNext());
   }
}