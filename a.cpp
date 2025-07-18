#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n, k, a, b;
    cin >> n >> k >> a >> b;

    vector<pair<long long, long long>> coords(n);
    for (int i = 0; i < n; i++) {
        cin >> coords[i].first >> coords[i].second;
    }

    long long cost_org = llabs(coords[a - 1].first - coords[b - 1].first) +
                         llabs(coords[a - 1].second - coords[b - 1].second);

    long long x = LLONG_MAX/2, y = LLONG_MAX/2;
    for (int i = 0; i < k; i++) {
        x = min(x, llabs(coords[a - 1].first - coords[i].first) + llabs(coords[a - 1].second - coords[i].second));
        y = min(y, llabs(coords[b - 1].first - coords[i].first) + llabs(coords[b - 1].second - coords[i].second));
    }

    cout << min(cost_org, x + y) << '\n';
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

#ifndef ONLINE_JUDGE
    freopen("./outputs/input.txt", "r", stdin);
    freopen("./outputs/output.txt", "w", stdout);
#endif

    int t;
    cin >> t;
    while (t--) solve();

    return 0;
}
