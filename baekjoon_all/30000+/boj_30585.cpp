// Solve 2023-11-27

#include <bits/stdc++.h>
using namespace std;

#define FASTIO ios_base::sync_with_stdio(false);cin.tie(NULL); // boj_15552.cpp
#define SETPRECISION(n) cout << fixed;cout.precision(n); // boj_1008.cpp
#define SIZE(v) (int)v.size()
#define ALL(v) v.begin(),v.end()
using ll = long long;

int main() {
    FASTIO;

    int h, w;
    cin >> h >> w;

    int ans = 0;

    for (int i = 0; i < h; i++) {
        string s;
        cin >> s;

        for (char c : s) {
            if (c == '0') {
                ans++;
            }
        }
    }

    ans = min(ans, h * w - ans);

    cout << ans << '\n';

    return 0;
}
