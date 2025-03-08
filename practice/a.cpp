#include <bits/stdc++.h>
using namespace std;

int main() {
    string S, T;
    cin >> S >> T;

    string res = "UNRESTORABLE";
    for (int i = 0; i+T.size() <= S.size(); i++) {
        bool ok = true;
        string tmp = S;
        for (int j = 0; j < T.size(); j++) {
            if (S[i+j] != '?' && S[i+j] != T[j]) ok = false;
            tmp[i+j] = T[j];
        }
        if (ok) {
            for (int j = 0; j < tmp.size(); j++) {
                if (tmp[j] == '?') tmp[j] = 'a';
            }
            if (res == "UNRESTORABLE") res = tmp;
            else res = min(res, tmp);
        }
    }
    cout << res << endl;
}