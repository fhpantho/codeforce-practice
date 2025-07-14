#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t; // Read the number of test cases

    while (t--) {
        int n, m, k;
        cin >> n >> m >> k; // Read n, m, k

        vector<int> a(m); // List of missing questions
        for (int i = 0; i < m; i++) {
            cin >> a[i]; // Read the missing questions
        }

        vector<bool> used(n + 1, false); // Track known questions
        for (int i = 0; i < k; i++) {
            int q;
            cin >> q; // Read known questions
            used[q] = true; // Mark known questions
        }

        int l = k; // Number of known questions
        string result; // Result string for this test case

        for (int i = 0; i < m; i++) {
            // Check if Monocarp can pass
            if (l == n || (l == n - 1 && !used[a[i]])) {
                result += '1'; // Can pass
            } else {
                result += '0'; // Cannot pass
            }
        }

        cout << result << endl; // Output the result for the current test case
    }

    return 0;
}