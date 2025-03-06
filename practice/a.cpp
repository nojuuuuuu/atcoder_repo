#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    const int Max_N = 100000;
    const int Max_V = 1000000000;

    typedef pair<int, int> P;

    int X[Max_N];
    int L[Max_N];

    for(int i=0; i<N; i++){
        cin >> X[i] >> L[i];
    }

    P ps[Max_N];
    for(int i=0; i<N; i++){
        ps[i] = P(X[i] + L[i], X[i] - L[i]);
    }
    sort(ps, ps+N);
    int cur = -Max_V;
    int ans = 0;

    for(int i=0; i<N; i++){
        if(cur<=ps[i].second){
            ans++;
            cur = ps[i].first;
        }
    }

    cout << ans << endl;
    return 0;
}
