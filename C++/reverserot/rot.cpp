#include <iostream>
#include <string>
using namespace std;

void rotate(string line, int rot) {
   for (int i = 0; i < line.length(); i++) {
      int curr = line[i];
      if (curr == '_') {
         switch (rot) {
            case 1:
               cout << ".";
               break;
            
            default:
               char out = 'A' + (rot-2);
               cout << out;
               break;
         }
      }
      else if (curr == '.') {
         switch (rot) {
            case 27:
               cout << "_";
               break;
            
            default:
               char out = 'A' + (rot-1);
               cout << out;
               break;
         }
         
      }
      else {
         int out = curr + rot;

         if (out <= 90) {
            cout << (char) out;
         }
         else if (out == 91 || out == 92) {
            switch (out)
            {
            case 91:
               cout << "_";
               break;
            
            default:
               cout << ".";
               break;
            }
         }
         else
         {
            cout << (char)(out - 28);
         }
      }
   }
   cout << endl;
}

int main() {
   string sin, line, curr;
   cin >> sin;
   int rot = stoi(sin);

   while (rot != 0) {
      cin >> line;

      curr.replace(curr.begin(), curr.end(), line.rbegin(), line.rend());

      rotate(curr, rot);

      cin >> sin;
      rot = stoi(sin);
   }

   return 0;
}