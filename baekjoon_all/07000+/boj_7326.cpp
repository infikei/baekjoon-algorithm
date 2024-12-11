// Solve 2024-12-11

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

    int n;
    cin >> n;

    while (n-- > 0) {
        int x, y;
        cin >> x >> y;

        if (y == x) {
            if (x % 2 == 1) {
                println(x * 2 - 1);
            }
            else {
                println(x * 2);
            }
        }
        else if (y == x - 2) {
            if (x % 2 == 1) {
                println(x * 2 - 3);
            }
            else {
                println(x * 2 - 2);
            }
        }
        else {
            println("No Number");
        }
    }

    return 0;
}
