#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

vector<int> OgList;
vector<int> list1;
vector<int> list2;
int n;

int myFind(int value) {
   for (int i = 0; i < n; i++) {
      if (list1.at(i) == value) {
         return i;
      }
   }
   return -99999;
}

int main() {
   string sn;

   do {
      OgList.clear();
      list1.clear();
      list2.clear();

      getline(cin, sn);
      n = stoi(sn);

      string curr;

      for (int i = 0; i < n; i++) {
         getline(cin, curr);
         list1.push_back(stoi(curr));
      }

      OgList.assign(list1.begin(), list1.end());

      for (int j = 0; j < n; j++) {
         getline(cin, curr);
         list2.push_back(stoi(curr));
      }

      sort(list1.begin(), list1.end());
      sort(list2.begin(), list2.end());

      for (int k = 0; k < n; k++) {
         cout << list2.at(myFind(OgList.at(k))) << endl;
      }
      cout << endl;

   } while (n != 0);
   
   return 0;
}