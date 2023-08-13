// Solve 2023-08-12

#include <bits/stdc++.h>
using namespace std;

#define FASTIO ios_base::sync_with_stdio(false);cin.tie(NULL); // boj_15552.cpp
#define SETPRECISION(n) cout << fixed;cout.precision(n); // boj_1008.cpp
#define SIZE(v) (int)v.size()
#define ALL(v) v.begin(),v.end()
using ll = long long;

int main() {
    FASTIO;

    int cnt[3] = { 0 };

    for (int i = 0; i < 3; i++) {
        int x;
        cin >> x;

        cnt[x]++;
    }

    if (cnt[1] > cnt[2]) {
        cout << 1 << '\n';
    }
    else {
        cout << 2 << '\n';
    }

    return 0;
}
