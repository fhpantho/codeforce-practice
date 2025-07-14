#include <iostream>
#include <vector>
#include <set>
#include <string>

using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<pair<int, int> > ranges(n);
    for (int i = 0; i < n; ++i) {
        cin >> ranges[i].first >> ranges[i].second;
    }

    string result = "";
    for (int i = 0; i < n; ++i) {
        bool unique = false;
        set<int> possible_values;
        for (int j = 0; j < n; ++j) {
            if (j == i) continue;
            for (int k = ranges[j].first; k <= ranges[j].second; ++k) {
                possible_values.insert(k);
            }
        }

        for (int val = ranges[i].first; val <= ranges[i].second; ++val) {
            if (possible_values.find(val) == possible_values.end()) {
                unique = true;
                break;
            }
        }

        result += (unique ? '1' : '0');
    }
    cout << result << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}