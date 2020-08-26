#include <iostream>
#include <string>
using namespace std;

int main() {
   string sn, line;
   cin >> sn;
   int tb, lr, tbR, lrR;
   tb = lr = 0;

   for (int i = 0; i < stoi(sn); i++) {
      cin >> line;
      if (line[0] == '0') tb++;
      if (line[1] == '0') tb++;
      if (line[2] == '0') lr++;
      if (line[3] == '0') lr++;
   }

   if (tb >= lr) {
      if (tb == lr) {
         cout << (tb / 2) << " " << (tb % 2) << " " << (tb % 2) << endl;
      } else {
         cout << (lr / 2) << " " << tb - ((lr/2)*2) << " " << lr % 2 << "\n";
      }
   } else {
      cout << (tb / 2) << " " << tb % 2 << " " << lr - ((tb/2)*2) << "\n";
   }

   return 0;
}