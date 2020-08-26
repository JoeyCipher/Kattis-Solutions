#include <iostream>
using namespace std;

bool same(int n, int p) {
   string sn = to_string(n);
   int looking = 0;
   int have = 0;

   for (int i = 0; i < sn.size(); i++) {
      looking += sn[i] - 48;
   }

   string sHave = to_string(n*p);

   for (int i = 0; i < sHave.size(); i++) {
      have += sHave[i] - 48;
   }
   
   return(have == looking);
}

int main() {
   int n;
   cin >> n;

   while (n != 0) {

      for (int i = 11; ; i++) {
         if (same(n, i)) {
            cout << i << endl;
            break;
         }
      }
      
      cin >> n;
   }

   return 0;
}