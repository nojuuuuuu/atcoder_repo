#include <bits/stdc++.h>
using namespace std;
const int Max_N = 1000;

int main()
{
   int n;
   int S[Max_N];
   int T[Max_N];

   pair<int, int> P[Max_N];

   for(int i=0; i<n; i++){
      P[i].first = T[i];
      P[i].second = S[i];
   }

   sort(P, P+n);
   int ans = 0;
   int t = 0;
   for(int i=0; i<n; i++){
      if(t<P[i].second){
         t = P[i].first;
         ans++;
      }
   }

   cout << ans << endl;
}