#include <iostream>
using namespace std;

int main() {
   int n, t, curr, done, count;
   count = done = 0;
   cin >> n >> t;

   for (int i = 0; i < n; i++) {
      cin >> curr;
      if (done + curr <= t) {
         done += curr;
         count++;
      } else {
         break;
      }
   }
   
   cout << count << "\n";

   return 0;
}