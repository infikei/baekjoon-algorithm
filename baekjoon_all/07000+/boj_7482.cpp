// Solve 2023-08-22

#include <bits/stdc++.h>
using namespace std;

#define FASTIO ios_base::sync_with_stdio(false);cin.tie(NULL); // boj_15552.cpp
#define SETPRECISION(n) cout << fixed;cout.precision(n); // boj_1008.cpp
#define SIZE(v) (int)v.size()
#define ALL(v) v.begin(),v.end()
using ll = long long;

int main() {
    FASTIO;

    SETPRECISION(10);

    int t;
    cin >> t;

    for (int ti = 0; ti < t; ti++) {
        double a;
        cin >> a;

        cout << a / 6 << '\n';
    }

    return 0;
}
