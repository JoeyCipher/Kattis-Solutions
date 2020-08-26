#include <iostream>
using namespace std;

string sums(int n) {
   int s1, s2, s3;
   s1 = s2 = s3 = 0;
   string output = "";

   for (int i = 1; i <= n; i++) {
      s1 += i;
   }

   for (int i = 1; i <= 2 * n; i++) {
      switch (i % 2) {
         case 0: //even
            s3 += i;
            break;
         
         case 1: //odd
            s2 += i;
            break;
      }
   }

   output += to_string(s1);
   output += " ";
   output += to_string(s2);
   output += " ";
   output += to_string(s3);
   
   return output;
}

int main() {
   int cases;
   cin >> cases;

   for (int i = 0; i < cases; i++) {
      int k, n;
      cin >> k >> n;
      
      cout << k << " " << sums(n) << endl;
   }
   
}