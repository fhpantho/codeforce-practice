#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define vll vector<long long>

void solve() {
    ll n, k;
    cin >> n >> k;
    ll total = n * k;
    vll a(total);
    for (ll i = 0; i < total; i++) {
        cin >> a[i];
    }

    ll median_pos = (n + 1) / 2;
    ll step = n - median_pos + 1;
    ll index = total - step;
    ll sum = 0;

    for (ll i = 0; i < k; i++) {
        sum += a[index];
        index -= step;
    }

    cout << sum << '\n';
}

int main() {
    fastio;
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
