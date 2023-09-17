// Solve 2023-09-17

#include <bits/stdc++.h>
using namespace std;

#define FASTIO ios_base::sync_with_stdio(false);cin.tie(NULL); // boj_15552.cpp
#define SETPRECISION(n) cout << fixed;cout.precision(n); // boj_1008.cpp
#define SIZE(v) (int)v.size()
#define ALL(v) v.begin(),v.end()
using ll = long long;

int main() {
    FASTIO;

    int a, b;
    cin >> a >> b;

    int n = a - b;

    if (n > 0 && b >= n) {
        cout << "YES\n" << n << '\n';

        for (int i = 0, ie = n - 1; i < ie; i++) {
            cout << "aba\n";
        }

        for (int i = 0, ie = b - n + 1; i < ie; i++) {
            cout << "ab";
        }

        cout << "a\n";
    }
    else {
        cout << "NO\n";
    }

    return 0;
}
