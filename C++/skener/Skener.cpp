#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<int> split(string str, char delim) {
   vector<int> ret;
   int start = 0;
   int count = 0;

   for (int i = 0; i < str.length(); i++) {
      if (str[i] == delim){
         ret.push_back(stoi(str.substr(start, count)));
         count = 0;
         start = i+1;
         continue;
      } else if (i == str.length() - 1) {
         ret.push_back(stoi(str.substr(start, count + 1)));
      }
      count++;
   }
   return ret;
}

int main() {
   string in;
   getline(cin, in);
   vector<int> dims = split(in, ' ');

   int r = dims[0];
   int c = dims[1];
   int zr = dims[2];
   int zc = dims[3];

   string board[r*zr];
   string ogBoard[r];
   int index = (r*zr) - 1;

   for (int i = 0; i < r; i++) {
      getline(cin, in);
      ogBoard[i] = board[i] = in;
   }

   for (int i = 0; i < r; i++) {
      for (int j = 0; j < c; j++) {
         board[i].insert(zc*j, zc - 1, ogBoard[i][j]);
      }
   }

   for (int i = (r-1); i >= 0; i--) {
      for (int j = 0; j < zr; j++) {
         board[index--] = board[i];
      }  
   }
   

   for (int i = 0; i < r * zr; i++) {
      cout << board[i] << endl;
   }
   
   return 0;
}