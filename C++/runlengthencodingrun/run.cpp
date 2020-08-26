#include <iostream>
#include <string>
using namespace std;

int main() {
   string sin;
   string output = "";
   cin >> sin;

   if (sin == "D") {
      cin >> sin;

      for (int i = 1; i < sin.length(); i += 2) {
         for (int j = 0; j < (sin[i] - '0'); j++) {
            output += sin[i-1];
         }
      }
   } else if (sin == "E") {
      cin >> sin;
      char curr = sin[0];
      int count = 0;

      for (int i = 0; i < sin.length(); i++) {
         if (sin[i] == curr) {
            count++;
         } else {
            output += curr;
            output += to_string(count);
            count = 1;
            curr = sin[i];
         }
      }

      output += curr;
      output += to_string(count);
   }

   cout << output << endl;

   return 0;
}