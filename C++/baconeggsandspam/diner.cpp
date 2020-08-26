#include <iostream>
#include <string>
#include <set>
#include <map>
#include <vector>
using namespace std;

vector<string> split(string str, char delim) {
   vector<string> ret;
   int start = 0;
   int count = 0;

   for (int i = 0; i < str.length(); i++) {
      if (str[i] == delim){
         ret.push_back(str.substr(start, count));
         count = 0;
         start = i+1;
         continue;
      } else if (i == str.length() - 1) {
         ret.push_back(str.substr(start, count + 1));
      }
      count++;
   }
   return ret;
}

set<string> sort(string lis) {
   vector<string> names = split(lis, ' ');
   set<string> output;

   for (int i = 0; i < names.size(); i++) {
      output.insert(names[i]);
   }

   return output;
}

int main() {
   string sn;
   getline(cin, sn);

   while (sn != "0") {//loops for every day
      map<string, string> items;

      for (int x = 0; x < stoi(sn); x++) { //occurs for each line
         string sline, name;
         getline(cin, sline);
         vector<string> line = split(sline, ' ');
         vector<string>::iterator vecIt;


         for (vecIt = line.begin(); vecIt != line.end(); vecIt++) {
            if (vecIt != line.begin()) {
               items[*vecIt] += name + " ";
            } else {
               name = *vecIt;
            }
         }
      }//everyday
      map<string, string>::iterator mapIt;

      for (mapIt = items.begin(); mapIt != items.end(); mapIt++) {//for each key
         cout << mapIt->first + " ";
         set<string> names = sort(mapIt->second);
         set<string>::iterator setIt;

         for (setIt = names.begin(); setIt != names.end(); setIt++) {//for each name
            cout << *setIt + " ";
         }
         cout << endl;
      }
      cout << endl;
      getline(cin, sn);
   }

   return 0;
}