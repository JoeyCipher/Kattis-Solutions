#include <iostream>
#include <string>

using namespace std;

int main() {
   string in;
   getline(cin, in);
   int n = stoi(in);

   while (n != -1) {
      string matrix[n];
      string verts;

      for (int i = 0; i < n; i++) {
         getline(cin, in);

         for (int j = 0; j < (2*n) - 1; j++) {
            if (j % 2 == 0) {
               matrix[i] += in[j];
            }
         }
      }

      for (int i = 0; i < n; i++) {
         bool weak = true;

         for (int j = 0; j < n; j++) {
            if (!weak) {
               break;
            } else if (matrix[i][j] == '1') {
               for (int k = j+1; k < n; k++) {
                  if (matrix[i][k] == '1' && matrix[j][k] =='1') {
                     weak = false;
                     break;
                  }
               }
            }
         }

         if (weak) {
            verts += to_string(i) + " ";
         }
      }
      
      cout << verts << endl;
      getline(cin, in);
      n = stoi(in);

   }

   return 0;
}