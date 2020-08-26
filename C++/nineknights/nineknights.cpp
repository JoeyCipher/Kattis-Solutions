#include <iostream>
#include <string>
using namespace std;

string board[5];
bool valid = true;

bool work(int i, int j) {
   //+2, +1
   if (i + 2 < 5 && j + 1 < 5 && board[i+2][j+1] == 'k') {
      return false;
   }
   
   //+1, +2
   if (i + 1 < 5 && j + 2 < 5 && board[i+1][j+2] == 'k') {
      return false;
   }
   
   //-2, +1
   if (i - 2 >= 0 && j + 1 < 5 && board[i-2][j+1] == 'k') {
      return false;
   }
   
   //+1, -2
   if (i + 1 < 5 && j - 2 >= 0 && board[i+1][j-2] == 'k') {
      return false;
   }
   
   //+2, -1
   if (i + 2 < 5 && j - 1 >= 0 && board[i+2][j-1] == 'k') {
      return false;
   }
   
   //-1, +2
   if (i -1 >= 0 && j + 2 < 5 && board[i-1][j+2] == 'k') {
      return false;
   }
   
   //-2, -1
   if (i - 2 >= 0 && j - 1 >= 0 && board[i-2][j-1] == 'k') {
      return false;
   }
   
   //-1, -2
   if (i - 2 >= 0 && j - 1 >= 0 && board[i-2][j-1] == 'k') {
      return false;
   }

   return true;
}

int main() {
   int count = 0;
   for (int i = 0; i < 5; i++) {
      cin >> board[i];
   }
   
   for (int i = 0; i < 5; i++) {
      for (int j = 0; j < 5; j++) {
         if (board[i][j] == 'k') {
            count++;
            if (!work(i, j)) {
               valid = false;
               break;
            }
         }
         
      }
   }

   if (count != 9) {
      valid = false;
   }
   valid ? cout << "valid\n" : cout << "invalid\n";

   return 0;
}