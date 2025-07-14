#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long n;
    cin >> n;
    vector<long long> mins, seconds;
    for (long long i = 0; i < n; i++)
    {
        long long m;
        cin >> m;
        vector<long long> a(m);
        for (long long k = 0; k < m; k++)
        {
            cin >> a[k];
        }
        sort(a.begin(), a.end());
        mins.push_back(a[0]);
        seconds.push_back(a[1]);
    }
    long long sum_seconds = 0;
    for (long long x : seconds) sum_seconds += x;
    long long min_mins = *min_element(mins.begin(), mins.end());
    long long min_seconds = *min_element(seconds.begin(), seconds.end());
    cout << sum_seconds - min_seconds + min_mins << endl;
}

int main()
{
    long long t;
    cin >>  t;
    while (t--)
    {
        solve();
    }
    return 0;
}