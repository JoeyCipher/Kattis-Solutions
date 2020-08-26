#include <iostream>
#include <string>
using namespace std;

int main() {
   string curr, output;
   char ch;
   int r, c;
   cin >> r >> c;
   char board[r][c];
   curr = output = "";

   for (int i = 0; i < r; i++) {
   getline(cin, curr);
      for (int j = 0; j < c; j++) {
        cin.get(ch);
        board[i][j] = ch;

        if (ch != '#') {
            curr += ch;
        } else {
            if (curr.length() < 2) {
               curr = "";
               continue;
            }

            output == "" ? output = curr : 
            output.compare(curr) > 0 ? output = curr : output;
            curr = "";
        }
      }
      if (curr.length() < 2) {
               curr = "";
               continue;
            }

            output == "" ? output = curr : 
            output.compare(curr) > 0 ? output = curr : output;
            curr = "";
   }

   for (int i = 0; i < c; i++) {
      for (int j = 0; j < r; j++) {
        ch = board[j][i];

        if (ch != '#') {
            curr += ch;
        } else {
            if (curr.length() < 2) {
               curr = "";
               continue;
            }

            output == "" ? output = curr : 
            output.compare(curr) > 0 ? output = curr : output;
            curr = "";
        }
      }

      if (curr.length() < 2) {
               curr = "";
               continue;
            }

            output == "" ? output = curr : 
            output.compare(curr) > 0 ? output = curr : output;
            curr = "";
   }

   cout << output << endl;

   return 0;
}