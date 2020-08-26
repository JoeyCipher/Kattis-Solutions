#include <iostream>
#include <cmath>
using namespace std;

int main() {
   int n, q;
   cin >> n >> q;
   int comp[n];

   for (int i = 0; i < n; i++) {
      cin >> comp[i];
   }

   for (int i = 0; i < q; i++) {
      int act;
      cin >> act;

      switch (act) {
         case 1:
            int index, loc;
            cin >> index >> loc;
            comp[index - 1] = loc;
            break;
         
         case 2:
            int a, b;
            cin >> a >> b;
            cout << abs(comp[a - 1] - comp[b - 1]) << endl;
            break;
      }
   }
   return 0;
}