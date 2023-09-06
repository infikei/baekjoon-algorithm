// Solve 2023-02-10
// Update 2023-09-06

#include <bits/stdc++.h>
using namespace std;

#define FASTIO ios_base::sync_with_stdio(false);cin.tie(NULL); // boj_15552.cpp
#define SETPRECISION(n) cout << fixed;cout.precision(n); // boj_1008.cpp
#define SIZE(v) (int)v.size()
#define ALL(v) v.begin(),v.end()
using ll = long long;

int main() {
    FASTIO;

    // 문제의 힌트를 그대로 가져와서 hint에 복사

    string hint = "占쏙이옙占쏙옙占쏙옙占쏙옙占쏙문옙占쏙옙占쏙옙占쏙옙占쏙제옙占쏙옙占쏙옙占쏙옙占쏙옙占쏙는옙占쏙옙占쏙옙占쏙옙占쏙옙占쏙옙예占쏙옙占제쏙옙占쏙옙占쏙옙占쏙옙占쏙옙占쏙를옙占쏙옙占쏙옙占쏙옙占쏙옙채占쏙옙占쏙옙占쏙옙占쏙옙占쏙옙占쏙옙占쏙옙점占쏙옙占쏙옙占쏙옙占쏙옙占쏙하옙占지쏙옙占쏙옙占쏙옙占쏙옙占쏙옙占쏙않옙占쏙옙占쏙옙占쏙옙占쏙옙占쏙습옙占쏙옙占쏙옙占쏙니옙占쏙옙占쏙옙占쏙옙占쏙옙占쏙옙占쏙옙占쏙옙다占쏙옙占쏙옙占쏙옙占쏙옙占쏙옙占쏙옙占쏙옙占쏙옙占쏙옙占쏙옙占쏙옙占쏙옙占쏙옙占쏙옙.\n占쏙옙데占쏙옙占쏙옙占쏙옙占쏙옙占쏙이옙占쏙옙占쏙터옙占쏙옙占는쏙옙占쏙옙占쏙옙占쏙옙占쏙옙占쏙옙占쏙옙占쏙옙占쏙옙占쏙옙占쏙옙占쏙옙占쏙옙占쏙옙占쏙옙占쏙옙占쏙옙占쏙옙占쏙옙占쏙옙占쏙옙占쏙옙占쏙옙한占쏙옙占쏙옙占쏙옙占쏙옙占쏙옙占쏙개옙占쏙옙占쏙옙占쏙옙占쏙옙占쏙옙占쏙옙占쏙옙占쏙옙占쏙옙占쏙옙占쏙옙占쏙옙占쏙옙占쏙옙占쏙옙占쏙옙占쏙옙占쏙옙占쏙옙占쏙옙占쏙옙占쏙옙占쏙옙占쏙옙占쏙옙占쏙옙占쏙옙占쏙옙占쏙옙占쏙옙占쏙옙占쏙옙占쏙옙占쏙옙占쏙옙占쏙옙占쏙옙占쏙옙占쏙옙占쏙옙占쏙옙占쏙옙占쏙옙占쏙옙占쏙옙占쏙옙占쏙옙占쏙옙占쏙옙占쏙옙占쏙옙占쏙옙占쏙옙占쏙옙占쏙옙占쏙옙占쏙옙占쏙옙占쏙옙占쏙옙占쏙옙占쏙옙占쏙옙占쏙옙占쏙옙占쏙옙占쏙옙占쏙옙占쏙옙占쏙옙입占쏙옙占쏙옙占쏙옙占쏙옙占쏙옙占쏙옙占쏙옙니占쏙옙占쏙옙占쏙옙占쏙옙占쏙옙占쏙옙占쏙옙占쏙옙占쏙옙占쏙옙占쏙다옙\n占쏙옙占쏙옙占쏙옙입占쏙옙占쏙옙占쏙옙占쏙옙占쏙옙占쏙옙占쏙옙占쏙옙占쏙옙占쏙옙占쏙옙占쏙옙占쏙옙占쏙옙占쏙옙력占쏙옙占쏙옙占쏙옙占쏙옙을占쏙옙占쏙옙占쏙옙占쏙옙占쏙받옙占쏙옙占쏙옙占쏙옙占쏙옙占쏙옙占쏙옙占을쏙옙占쏙옙占쏙옙占쏙옙占쏙옙占쏙옙占쏙옙占쏙옙占쏙옙占쏙옙占쏙옙占쏙옙占쏙옙占쏙옙占쏙옙占쏙옙占쏙옙占쏙옙占쏙옙占쏙옙필占쏙옙占쏙옙占쏙옙占쏙옙占쏙옙占쏙옙占쏙옙占쏙옙占쏙옙占쏙옙占쏙옙占쏙옙占쏙옙占쏙옙占쏙옙占쏙옙占쏙옙占쏙옙占쏙옙占쏙옙占쏙옙占쏙옙占쏙옙占쏙옙占쏙옙요占쏙옙占쏙옙占쏙옙占쏙옙占쏙옙占쏙옙占쏙옙占쏙옙占쏙옙占쏙옙占쏙옙占쏙옙占쏙는옙占쏙옙占쏙옙占쏙옙占쏙옙占쏙옙占쏙옙占쏙옙占쏙옙占쏙옙占쏙옙占쏙옙占쏙옙占쏙옙占쏙옙占쏙옙없占쏙옙占쏙옙占쏙옙占쏙옙占쏙옙占쏙옙占쏙옙占쏙옙占쏙옙占쏙옙占쏙옙占쏙옙占쏙옙占쏙옙占쏙옙占쏙옙占쏙옙占쏙옙占쏙옙占쏙옙占쏙옙占쏙옙占쏙옙占쏙옙占다쏙옙占쏙옙";

    hint = regex_replace(hint, regex("占"), "");
    hint = regex_replace(hint, regex("쏙"), "");
    hint = regex_replace(hint, regex("옙"), "");

    cout << hint << '\n';

    return 0;
}
