#include <iostream>
#include <vector>
#include <tgmath.h>
#include <iomanip>
using namespace std;

double score(int n, int skip, vector<double> vec) {
   double sum = 0;
   bool skipped = false;

   for (int i = 0; i < n; i++) {
      if (i == skip) {
         skipped = true;
         continue;
      }

      skipped ? sum += (vec[i] * pow(.8, i-1)) : sum += (vec[i] * pow(.8, i));
   }
   return sum * .2;
}

int main() {
   int n;
   double curr;
   double sum = 0;
   vector<double> vec;
   cin >> n;

   for (int i = 0; i < n; i++) {
      cin >> curr;
      vec.push_back(curr);
   }

   cout << fixed << setprecision(7) << score(n, -1, vec) << endl;

   for (int i = 0; i < n; i++) {
      sum += score(n, i, vec);
   }
   cout << sum / double(n) << endl;

   return 0;
}