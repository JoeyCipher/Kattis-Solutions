#include <iostream>
#include <string>
#include <list>
using namespace std;

int main() {
   int n, curr;
   int output = 0;
   cin >> n;
   list<int> c;

   for (int i = 0; i < n; i++) {
      cin >> curr;
      c.insert(c.end(), curr);
      output += curr;
   }

   c.sort();
   c.reverse();

   while (c.size() >= 3) {
      c.pop_front();
      c.pop_front();
      output -= c.front();
      c.pop_front();
   }

   cout << output << "\n";
   
   return 0;
}