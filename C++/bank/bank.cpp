#include <iostream>
#include <map>
#include <list>
using namespace std;

// ostream& operator<<(ostream& os, const list<int> &list) {
//    for (auto const& i: list) {
//       os << i << " ";
//    }
//    return os;
// }

int main() {
   int N, T, c, t;
   int total = 0;
   cin >> N >> T;
   map<int, list<int> > line;

   for (int i = 0; i < T; i++) {
      list<int> filler;
      line.insert(pair<int, list<int> >(i, filler));
   }

   for (int i = 0; i < N; i++) {
      cin >> c >> t;
      line[t].push_back(c);
      line[t].sort();
   }

   list<int> avail;
   avail.push_back(0);

   for (int i = T-1; i >= 0; i--) {
      if (!line[i].empty()) {
         avail.merge(line[i]);
         total += avail.back();
         avail.pop_back();
      }
   }
   
   cout << total << endl;

   return 0;
}