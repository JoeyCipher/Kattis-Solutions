import java.util.Arrays;
import java.util.HashSet;
import java.util.Scanner;

public class HappyPrime {
   private static boolean[] prime = new boolean[10_001];
   public static void main(String[] args) {
      prime();
      Scanner in = new Scanner(System.in);

      int cases = in.nextInt();

      for (int i = 0; i < cases; i++) {
         in.nextInt();
         Integer num = in.nextInt();

         if (prime[num] == false) {
            System.out.println((i + 1) + " " + num + " NO");
            continue;
         }
         else {
            if (happy(num, new HashSet<Integer>())) {
               System.out.println((i + 1) + " " + num + " YES");
            } else {
               System.out.println((i + 1) + " " + num + " NO");
            }
         }
      }
   }

   private static void prime() {
      Arrays.fill(prime, true);
      for (int i = 0; i < 10_000; i++) {
         if (prime[i] == false)
            continue;
         if (i <= 1) {
            prime[i] = false;
            continue;
         }

         for (int mults = i*i; mults < 10_000; mults += i) {
            prime[mults] = false;
         }
      }

      prime[10_000] = false;
      prime[0] = false;
      prime[1] = false;
   }

   private static boolean happy(Integer num, HashSet<Integer> seen) {
      int total = 0;

      String[] nums = num.toString().split("");

      for (String curr : nums) {
         total += Integer.parseInt(curr) * Integer.parseInt(curr);
      }

      if (total == 1)
         return true;
      else if (seen.contains(total))
         return false;
      else {
         seen.add(total);
         return happy(total, seen);
      }
   }
}