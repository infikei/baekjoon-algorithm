// Solve 2022-11-08
// Update 2023-09-02

#include <bits/stdc++.h>
using namespace std;

#define FASTIO ios_base::sync_with_stdio(false);cin.tie(NULL); // boj_15552.cpp
#define SETPRECISION(n) cout << fixed;cout.precision(n); // boj_1008.cpp
#define SIZE(v) (int)v.size()
#define ALL(v) v.begin(),v.end()
using ll = long long;

int main() {
    FASTIO;

    int t;
    cin >> t;
    cin.ignore();

    for (int ti = 0; ti < t; ti++) {
        string line;
        getline(cin, line);

        stringstream ss(line);
        string w;
        int ans = 0;

        while (ss >> w) {
            ans += stoi(w);
        }

        cout << ans << '\n';
    }

    return 0;
}
