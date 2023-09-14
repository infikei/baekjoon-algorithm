// Solve 2023-09-03

#include <bits/stdc++.h>
using namespace std;

#define FASTIO ios_base::sync_with_stdio(false);cin.tie(NULL); // boj_15552.cpp
#define SETPRECISION(n) cout << fixed;cout.precision(n); // boj_1008.cpp
#define SIZE(v) (int)v.size()
#define ALL(v) v.begin(),v.end()
using ll = long long;

int main() {
    FASTIO;

    int n, m;
    cin >> n >> m;

    set<int> st;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;

        if (i < m) st.insert(x);
    }

    for (int i = 0; i < m; i++) {
        int x;
        cin >> x;

        st.erase(x);
    }

    cout << SIZE(st) << '\n';

    return 0;
}