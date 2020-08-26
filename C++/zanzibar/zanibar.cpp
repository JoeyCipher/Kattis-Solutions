#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<int> split(string str) {
   vector<int> ret;
   int start = 0;
   int count = 0;

   for (int i = 0; i < str.length(); i++) {
      if (str[i] == ' '){
         //cout << str.substr(start, count) << endl;
         ret.push_back(stoi(str.substr(start, count)));
         count = 0;
         start = i+1;
         continue;
      }
      count++;
   }
   return ret;
}

int main() {
   string cases;
   getline(cin, cases);
   int immigrants = 0;

   for (int i = 0; i < stoi(cases); i++) {
      vector<int> turtles;
      string line;
      getline(cin, line);
      turtles = split(line);

      for (int j = 0; j < turtles.size() - 1; j++) {
         int curr = turtles.at(j);
         int next = turtles.at(j+1);

         if (next > curr * 2) {
            immigrants += next - (curr * 2);
         }
      }

      cout << immigrants << endl;
      immigrants = 0;
   }

   return 0;
}