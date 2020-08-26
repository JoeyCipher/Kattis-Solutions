#include <iostream>
using namespace std;

int dSum(int n) {
   string sn = to_string(n);
   int output = 0;

   for (int i = 0; i < sn.length(); i++) {
      output += sn[i] - '0';
   }
   return output;
}

int main() {
   string scases;
   getline(cin, scases);

   for (int i = 0; i < stoi(scases); i++) {
      string sn;
      getline(cin, sn);
      int n = stoi(sn);
      int looking = dSum(n) - 1;

      for (int j = n - 1; j >= 0; j--) {
         if (dSum(j) == looking) {
            cout << j << endl;
            break;
         }
      }
      
   }
   

   return 0;
}