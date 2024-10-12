// Solve 2024-09-28

#include <bits/stdc++.h>

#define FASTIO ios_base::sync_with_stdio(false);cin.tie(NULL);
#define size(v) (int)v.size()
#define all(v) v.begin(),v.end()
#define setw(n, c) cout << setw(n) << setfill(c);
#define setp(n) cout << fixed << setprecision(n);
#define printw(x) cout << (x) << ' ';
#define println(x) cout << (x) << '\n';

#ifdef BOJ
#define testPrint(x) ((void)0)
#else
#define testPrint(x) cout << "[D] " << #x << ':' << x << '\n'
#endif

using namespace std;
using ll = long long;
using uint = unsigned int;
using ull = unsigned long long;
using ld = long double;
using pii = pair<int, int>;

const double PI = M_PI;

int main() {
    FASTIO;

    int scores[20];
    int pos = 0;

    for (int i = 0; i < 20; i++) {
        cin >> scores[i];

        if (scores[i] == 20) {
            pos = i;
        }
    }

    int alice = 20 + scores[(pos + 1) % 20] + scores[(pos + 19) % 20];

    if (alice * 2 > 63) {
        println("Alice");
    }
    else {
        println("Bob");
    }

    return 0;
}