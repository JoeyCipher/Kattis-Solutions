import java.util.*;

public class Fox {
   public static void main(String[] args) {
      Scanner in = new Scanner(System.in);
      int testCases;
      String[] animalArray, heardArray;
      String animal, heardString;

      testCases = Integer.parseInt(in.nextLine());
      
      for (int j = 0; j < testCases; j++) {

         heardString = in.nextLine();
         heardString += " EndOfTheList";
         heardArray = heardString.split(" ");
         ArrayList<String> heard = new ArrayList<String>();


         for (int i = 0; !heardArray[i].equals("EndOfTheList"); i++) {
            heard.add(heardArray[i]);
         }

         ArrayList<String> known = new ArrayList<String>();

         while (true) {
            animal = in.nextLine();

            if (animal.equals("what does the fox say?")) {
               break;
            }

            animalArray = animal.split(" ");
            known.add(animalArray[2]);
         }

         known.add("EndOfList");

         for (int k = 0; !known.get(k).equals("EndOfList"); k++) {
            
            while (heard.contains(known.get(k))) {
            heard.remove(known.get(k));
            }
         }
         System.out.println(String.join(" ", heard));
      }
   }
}