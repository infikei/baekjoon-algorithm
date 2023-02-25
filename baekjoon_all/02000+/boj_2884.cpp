// Solve 2021-12-18
// Update 2023-02-22

#include <bits/stdc++.h>
using namespace std;

#ifdef BOJ
#define BOJTEST(x) ((void)0)
#else
#define BOJTEST(x) cout << "[Debug] " << #x << ':' << x << '\n'
#endif
#define FASTIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL); // boj_15552.cpp
#define SETPRECISION(n) cout << fixed;cout.precision(n); // boj_1008.cpp
#define SIZE(v) (int)v.size()
#define ALL(v) v.begin(),v.end()
using ll = long long;
using uint = unsigned int;
using ull = unsigned long long;

int main() {
    FASTIO;

    int hour, minute;

    cin >> hour >> minute;

    if (minute >= 45) {
        minute -= 45;
    }
    else {
        minute += 15;
        if (hour == 0) {
            hour = 23;
        }
        else {
            hour -= 1;
        }
    }

    cout << hour << ' ' << minute << '\n';

    return 0;
}