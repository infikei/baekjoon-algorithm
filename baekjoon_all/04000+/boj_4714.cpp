// Solve 2023-09-26

#include <bits/stdc++.h>
using namespace std;

#define FASTIO ios_base::sync_with_stdio(false);cin.tie(NULL); // boj_15552.cpp
#define SETPRECISION(n) cout << fixed;cout.precision(n); // boj_1008.cpp
#define SIZE(v) (int)v.size()
#define ALL(v) v.begin(),v.end()
using ll = long long;

int main() {
    FASTIO;

    SETPRECISION(2);

    while (true) {
        double d;
        cin >> d;

        if (d < 0) break;

        cout << "Objects weighing " << d << " on Earth will weigh " << d * 0.167 << " on the moon.\n";
    }

    return 0;
}
