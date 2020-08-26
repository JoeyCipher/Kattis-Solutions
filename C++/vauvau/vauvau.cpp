#include <iostream>
#include <string>
using namespace std;

int main() {
   int a, b, c, d, curr;
   bool aAngry, bAngry;
   cin >> a >> b >> c >> d;
   int aSum = a + b;
   int bSum = c + d;

   for (int i = 0; i < 3; i++) {
      cin >> curr;
      int aMod = curr % aSum;
      int bMod = curr % bSum;

      (aMod >= 1 && aMod <= a) ? aAngry = true : aAngry = false;
      (bMod >= 1 && bMod <= c) ? bAngry = true : bAngry = false;

      if (aAngry && bAngry) cout << "both\n";
      else if (!aAngry && !bAngry) cout << "none\n";
      else cout << "one\n";
   }
   

   return 0;
}