// Solve 2022-07-26
// Update 2023-02-09

#include <bits/stdc++.h>
using namespace std;

#ifdef BOJ
#define BOJTEST(x) ((void)0)
#else
#define BOJTEST(x) cout << "[Debug] " << #x << ':' << x << '\n'
#endif
#define FASTIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL); // boj_15552.cpp
#define SIZE(v) (int)v.size()
#define ALL(v) v.begin(),v.end()
#define INF (int)1e9
#define LLINF (ll)4e18
using ll = long long;
using uint = unsigned int;
using ull = unsigned long long;

const int N_MAX = 1e6;
int n, dp_count[N_MAX + 1], dp_parent[N_MAX + 1];

int main() {
    FASTIO;

    cin >> n;

    dp_count[1] = 0;
    for (int i = 2; i <= n; i++) {
        dp_count[i] = dp_count[i - 1];
        dp_parent[i] = i - 1;

        if (i % 2 == 0) {
            int ni = i / 2;
            if (dp_count[ni] < dp_count[i]) {
                dp_count[i] = dp_count[ni];
                dp_parent[i] = ni;
            }
        }

        if (i % 3 == 0) {
            int ni = i / 3;
            if (dp_count[ni] < dp_count[i]) {
                dp_count[i] = dp_count[ni];
                dp_parent[i] = ni;
            }
        }

        dp_count[i]++;
    }

    cout << dp_count[n] << '\n';
    int cur = n;
    while (cur != 1) {
        cout << cur << ' ';
        cur = dp_parent[cur];
    }
    cout << cur << '\n';

    return 0;
}