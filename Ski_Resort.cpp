#include <bits/stdc++.h>
using namespace std;

long long count_subarrays(int len, int k) {
    if (len < k) return 0;
    long long count = len - k + 1;
    return count * (count + 1) / 2;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k, q;
        cin >> n >> k >> q;

        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            arr[i] = (x <= q) ? 1 : 0;
        }

        long long ans = 0;
        int len = 0;
        for (int i = 0; i < n; i++) {
            if (arr[i] == 1) {
                len++;
            } else {
                ans += count_subarrays(len, k);
                len = 0;
            }
        }
        ans += count_subarrays(len, k);

        cout << ans << endl;
    }
    return 0;
}
