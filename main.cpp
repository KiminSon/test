#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(0), cin.tie(0);
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif
    int n, a, b, maxi, minis, maxis, ans;
    int len[6];
    vector<int> tok;

    cin >> n;

    for (int i = 0; i < 6; i++) {
        cin >> a >> b;
        len[i] = b;
    }

    for (int i = 0; i <= 4; i++) {
        tok.emplace_back(len[i] * len[i + 1]);
    }

    tok.emplace_back(len[0] * len[5]);
    maxi = max_element(tok.begin(), tok.end()) - tok.begin();
    maxis = *max_element(tok.begin(), tok.end());
    minis = tok[(maxi + 3) % 6];

    ans = n * (maxis - minis);

    cout << ans << "\n";
}