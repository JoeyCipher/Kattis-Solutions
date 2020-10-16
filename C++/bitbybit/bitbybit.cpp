#include <iostream>
using namespace std;

int main() {
   int n;
   cin >> n;

   while (n != 0) {
      string out = "????????????????????????????????";

      for (int i = 0; i < n; i++) {
         string com;
         cin >> com;

         if (com == "SET") {

            int i;
            cin >> i;
            out[31-i] = '1';

         } 
         else if (com == "CLEAR") {

            int i;
            cin >> i;
            out[31-i] = '0';

         }
         else if (com == "OR") {

            int i,j;
            cin >> i >> j;
            
             if (out[31-i] == '1' || out[31-j] == '1') {
               out[31-i] = '1';
            } else if (out[31-i] == '0' && out[31-j] == '0') {
               out[31-i] = '0';
            } else {
               out[31-i] = '?';
            }

         } else if (com == "AND") {

            int i,j;
            cin >> i >> j;

            if (out[31-i] == '0' || out[31-j] == '0') {
               out[31-i] = '0';
            } else if (out[31-i] == '1' && out[31-j] == '1') {
               out[31-i] = '1';
            } else {
               out[31-i] = '?';
            }
         }
      }
      cout << out << endl;
      cin >> n;
   }
   
   return 0;
}