#include <bits/stdc++.h>
using namespace std;

int main() {
    long long X, Y;
    cin >> X >> Y;
    
    int count = 1;
    long long tmp = X;
    while(X*2<=Y){
        X *= 2;
        count++;
    }

    cout << count << endl;
    return 0;
}