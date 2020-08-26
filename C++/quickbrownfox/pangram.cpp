#include <iostream>
#include <array>
#include <cctype>
using namespace std;

int main() {
   //cout << 'a' - 97 << endl;
   string scases;
   getline(cin, scases);

   for (int i = 0; i < stoi(scases); i++) {
      string line;
      getline(cin, line);
      array<bool, 26> used;
      fill(used.begin(), used.end(), 0);

      for (int j = 0; j < line.length(); j++) {
         line[j] = tolower(line[j]);
         switch (line[j])
         {
         case 'a':
            used[line[j] - 97] = 1;
            break;
         case 'b':
            used[line[j] - 97] = 1;
            break;
         case 'c':
            used[line[j] - 97] = 1;
            break;
         case 'd':
            used[line[j] - 97] = 1;
            break;
         case 'e':
            used[line[j] - 97] = 1;
            break;
         case 'f':
            used[line[j] - 97] = 1;
            break;
         case 'g':
            used[line[j] - 97] = 1;
            break;
         case 'h':
            used[line[j] - 97] = 1;
            break;
         case 'i':
            used[line[j] - 97] = 1;
            break;
         case 'j':
            used[line[j] - 97] = 1;
            break;
         case 'k':
            used[line[j] - 97] = 1;
            break;
         case 'l':
            used[line[j] - 97] = 1;
            break;
         case 'm':
            used[line[j] - 97] = 1;
            break;
         case 'n':
            used[line[j] - 97] = 1;
            break;
         case 'o':
            used[line[j] - 97] = 1;
            break;
         case 'p':
            used[line[j] - 97] = 1;
            break;
         case 'q':
            used[line[j] - 97] = 1;
            break;
         case 'r':
            used[line[j] - 97] = 1;
            break;
         case 's':
            used[line[j] - 97] = 1;
            break;
         case 't':
            used[line[j] - 97] = 1;
            break;
         case 'u':
            used[line[j] - 97] = 1;
            break;
         case 'v':
            used[line[j] - 97] = 1;
            break;
         case 'w':
            used[line[j] - 97] = 1;
            break;
         case 'x':
            used[line[j] - 97] = 1;
            break;
         case 'y':
            used[line[j] - 97] = 1;
            break;
         case 'z':
            used[line[j] - 97] = 1;
            break;
         default:
            break;
         }
      }
      
      bool pangram = 1;

      for (int j = 0; j < 26; j++) {
         if (used[j] == 0) {
            pangram = 0;
            break;
         }
      }

      if (pangram) {
         cout << "pangram";
      } else {
         cout << "missing ";
         for (int j = 0; j < 26; j++) {
            if (used[j] == 0) {
               cout << static_cast<char>(j+97);
            }
         }
      }
      
      cout << endl;
      

   }
   

   return 0;
}