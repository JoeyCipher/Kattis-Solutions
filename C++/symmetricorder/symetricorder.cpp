#include <iostream>
#include <string>

using namespace std;

int main() {
   string sn;
   int n;
   int cases = 1;

   do {
      getline(cin, sn);
      n = stoi(sn);
      string names[n];
      string order[n];

      for (int i = 0; i < n; i++) {
         getline(cin, names[i]);
      }

      int front = 0;
      int back = n -1;

      for (int j = 0; j < n; j++) {
         if (j % 2 == 0) {
            order[front++] = names[j];
         } else {
            order[back--] = names[j];
         }
      }

      if (n != 0)
         cout << "SET " << cases << endl;

      for (string name : order) {
         cout << name << endl;
      }

      cases++;
   } while (n != 0);
   
}