#include <bits/stdc++.h>
using namespace std;
const int Max_N = 2000;

int main()
{
    string S[Max_N];
    string T[Max_N];
    int N;

    int a = 0;
    int b = N -1;
    while (a<=b)
    {
        bool left = false;
        for (int i = 0; a + i <= b; i++){
            if(S[a + i] < S[b - i]){
                left = true;
                break;
            } else if (S[a + i] > S[b - i]){
                left = false;
                break;
            }
        }

        if (left) T[a] = S[a];
        else T[a] = S[b];
        a++;
        b--;
    }

    cout << T << endl;
}