#include <bits/stdc++.h>
using namespace std;

int main(){
    int price;
    cin >> price;
    int change = 1000 - price;

    vector<int> a = {500, 100, 50, 10, 5, 1};

    int sum = 0;

    for (int i=0; i<6; i++){
        int num = change / a[i];
        sum += num;
        change -= num*a[i];
    }

    cout << sum << endl;
    return 0;
}
