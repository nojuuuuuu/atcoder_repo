#include <bits/stdc++.h>
using namespace std;

int main() {
    const int V[6] = {1, 5, 10, 50, 100, 500};
    
    int C[6];
    int A;

    int ans = 0;

    for(int i=5; i>=0; i--){
        int t = min(A/V[i], C[i]);
        A -= t*V[i];
        ans += t;
    }

    cout << ans << endl;
}