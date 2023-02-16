// Solve 2022-10-01
// Update 2023-02-15

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

int main() {
    FASTIO;

    int n;
    cin >> n;

    for (int row = 1; row <= n; row++) {
        if (row % 2 == 0) {
            cout << ' ';
        }
        for (int i = 1; i <= n; i++) {
            cout << "* ";
        }
        cout << '\n';
    }

    return 0;
}