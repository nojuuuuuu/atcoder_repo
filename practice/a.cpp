#include <bits/stdc++.h>
using namespace std;
const int Max_N = 1000;

int main()
{
   const int V[6] = {1, 5, 10, 50, 100, 500};
   int A;
   int C[6];

   int ans = 0;
   
   for(int i=5; i>=0; i--){
      int n = min(A/V[i], C[i]);
      A -= n*V[i];
      ans += n;
   }
   cout << ans << endl;
}