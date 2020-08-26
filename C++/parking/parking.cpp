#include <iostream>
#include <array>
using namespace std;

int main() {
   int a, b, c;
   int output = 0;
   cin >> a >> b >> c;
   array<int, 100> arr;
   arr.fill(0);

   for (int x = 0; x < 3; x++) {
      int start, end;
      cin >> start >> end; //good

      for (int i = start; i < end; i++) {
         arr[i]++;
         //cout << i << " ";
      }
      //cout << endl;
      
   }

   for (int i = 0; i < 100; i++) {
      switch (arr[i]) {
         case 1:
            output += a;
            break;
         
         case 2:
            output += (b * 2);
            break;

         case 3:
            output += (c * 3);
            break;

         default:
            break;
      }
   }
   
   cout << output << endl;

   return 0;
}