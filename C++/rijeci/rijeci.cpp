#include <iostream>
#include <string>

using namespace std;

int main() {

   string in;
   getline(cin, in);
   int n = stoi(in);

   int text[3][2] = {
      {1,0},
      {0,1},
      {1,1}
   };
   

   for (int i = 2; i <= n; i++) {
      text[2][0] = text[0][0] + text[1][0];
      text[2][1] = text[0][1] + text[1][1];

      text[0][0] = text[1][0];
      text[0][1] = text[1][1];

      text[1][0] = text[2][0];
      text[1][1] = text[2][1];
   }

   if (n == 1) {
      cout << "0 1" << endl;
   } else if (n == 2) {
      cout << "1 1" << endl;
   } else {
      cout << text[2][0] << " " << text[2][1] << endl;
   }

   return 0;
}