#include <iostream>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cout.tie(NULL);cin.tie(NULL); // boj_15552.cpp

int main() {
    fastio;

    int T;
    cin >> T;

    for (int t = 0; t < T; t++) {
        int N, M;
        cin >> N >> M;

        cout << 2 * M - N << ' ' << N - M << '\n';
    }

    return 0;
}