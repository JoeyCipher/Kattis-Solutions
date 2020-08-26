import java.util.Scanner;
import java.util.TreeMap;

public class MyZoo{
   public static void main(String[] args) {
      Scanner in = new Scanner(System.in);
      TreeMap<String, Integer> zoo = new TreeMap<String, Integer>();

      int animals = in.nextInt();
      while (animals != 0){
         int count = 0;
         if (count < animals){
            String seen = in.nextLine();
            String ani = seen.toLowerCase();
            String[] index = ani.split(" ");

            System.out.println(ani);
         }
         animals = in.nextInt();
         count++;
      }
   }
}