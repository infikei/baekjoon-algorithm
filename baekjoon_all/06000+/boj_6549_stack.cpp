// Solve 2022-12-07
// Update 2024-03-04

// 1725번과 동일한 문제
// 스택을 이용한 풀이

#include <bits/stdc++.h>
using namespace std;

#define FASTIO ios_base::sync_with_stdio(false);cin.tie(NULL); // boj_15552.cpp
#define SETPRECISION(n) cout << fixed;cout.precision(n); // boj_1008.cpp
#define SIZE(v) (int)v.size()
#define ALL(v) v.begin(),v.end()
using ll = long long;

int h[100002];

int main() {
    FASTIO;

    while (true) {
        int n;
        cin >> n;

        if (n == 0) break;

        for (int x = 1; x <= n; x++) {
            cin >> h[x];
        }

        h[n + 1] = 0;
        stack<int> stck;
        stck.push(0);
        ll max_area = 0;

        for (int x = 1; x <= n + 1; x++) {
            while (!stck.empty() && h[stck.top()] > h[x]) {
                int px = stck.top();
                stck.pop();
                max_area = max(max_area, (ll)(x - 1 - stck.top()) * h[px]);
            }

            stck.push(x);
        }

        cout << max_area << '\n';
    }

    return 0;
}
