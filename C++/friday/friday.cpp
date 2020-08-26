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
   int cases = stoi(in);

   for (int x = 0; x < cases; x++) {

      getline(cin, in);

      int months = split(in, ' ').at(1);

      getline(cin, in);
      vector<int> days = split(in, ' ');
      int day = 0;
      int count = 0;

      for (int i = 0; i < months; i++) {
         for (int j = 0; j < days.at(i); j++) {
            if (j == 12 && day == 5) {
               count++;
            }
            
            if (++day == 7) day = 0;
         }
      }
      
      cout << count << endl;
   }
   


   return 0;
}