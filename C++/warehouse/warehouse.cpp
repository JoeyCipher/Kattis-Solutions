#include <iostream>
#include <map>
#include <set>

using namespace std;

struct comp { 
   template <typename T> 

   // Comparator function 
   bool operator()(const T& l, const T& r) const { 
      if (l.second != r.second) { 
         return l.second > r.second; 
      } 
      return l.first < r.first; 
   } 
}; 

void sort(map<string, int>& M) { 
   set<pair<string, int>, comp> S(M.begin(), M.end()); 

   for (auto& it : S) { 
      cout << it.first << ' ' << it.second << endl; 
   } 
} 

int main() {
   int t, n, num;
   string toy;
   cin >> t;

   for (int i = 0; i < t; i++) {
      cin >> n;
      map<string, int> toys;
      auto comp_func = toys.value_comp();

      for (int j = 0; j < n; j++) {
         cin >> toy >> num;

         try {
            toys.at(toy) += num;
         }
         catch(exception& e) {
            toys.insert(pair<string, int>(toy, num));
         }  
      }

      cout << toys.size() << endl;
      sort(toys);
   }

   return 0;
}