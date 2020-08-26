#include <iostream>
#include <string>
using namespace std;

int main() {
   int p, t, cases, count;
   count = cases = 0;
   string curr;
   bool go;
   cin >> p >> t;

   for (int i = 0; i < p; i++) {
      go = true;
      for (int j = 0; j < t; j++) {
         cin >> curr;
         for (int k = 1; k < curr.length(); k++) {
            if (curr[k] <= 96) {
               go = false;
               break;
            }
         }
         if (go) cases++;
         go = true;
      }
      if (cases == t) count++;
      cases = 0;
   }

   cout << count << endl;
   

   return 0;
}