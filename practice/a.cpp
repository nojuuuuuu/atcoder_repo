#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    int S[N];
    int T[N];

    vector<pair<int, int>> Z;

    for(int i=0; i<N; i++){
        Z[i] = {T[i], S[i]};
    }

    sort(Z.begin(), Z.end());

    int ans = 0;
    int t = 0;    
    for(int i=0; i<N; i++){
        if(t < Z[i].second){
            ans++;
            t = Z[i].first;
        }
    }

    cout << ans << endl;
}   