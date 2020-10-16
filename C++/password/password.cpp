#include <iostream>
#include <queue>
using namespace std;

int main() {
   double rem = 1;
   double total = 0;

   int n;
   cin >> n;

   string trash;
   double curr;
   
   priority_queue<double> q;

   for (int i = 0; i < n; i++) {
      cin >> trash >> curr;
      q.push(curr);
   }

   for (int i = 0; i < n; i++) {
      curr = q.top();
      q.pop();
      total += rem;
      rem -= curr;
   }
   
   cout << total << endl;

   return 0;
}