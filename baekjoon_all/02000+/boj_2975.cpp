// Solve 2023-10-02

#include <bits/stdc++.h>
using namespace std;

#define FASTIO ios_base::sync_with_stdio(false);cin.tie(NULL); // boj_15552.cpp
#define SETPRECISION(n) cout << fixed;cout.precision(n); // boj_1008.cpp
#define SIZE(v) (int)v.size()
#define ALL(v) v.begin(),v.end()
using ll = long long;

int main() {
    FASTIO;

    while (true) {
        int balance, add;
        char wd;
        cin >> balance >> wd >> add;

        if (balance == 0 && wd == 'W' && add == 0) break;

        if (wd == 'W') balance -= add;
        else balance += add;

        if (balance < -200) cout << "Not allowed\n";
        else cout << balance << '\n';
    }

    return 0;
}
