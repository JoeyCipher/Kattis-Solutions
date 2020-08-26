import java.util.*;
import java.io.*;

public class CD {
   public static void main(String[] args) throws IOException {
      BufferedReader in = new BufferedReader(new InputStreamReader(System.in));

      int jack, jill, cdCount = 0;
      String[] jj;

      while (true) {
         HashSet<Integer> intSet = new HashSet<Integer>();

         cdCount = 0;
         jj = in.readLine().split(" ");

         jack = Integer.parseInt(jj[0]);
         jill = Integer.parseInt(jj[1]);

         if (jack == 0 && jill == 0) {
            break;
         }

         for (int i = 0; i < jack; i++) {
               intSet.add(Integer.parseInt(in.readLine()));
         }   
         
         for (int j = 0; j < jill; j++) {
               if (intSet.contains(Integer.parseInt(in.readLine()))) {
                  cdCount++;
               }
         }

         System.out.println(cdCount);
      }
   }
}