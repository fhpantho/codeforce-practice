#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n,k;
        cin >> n >> k;
        
        vector <long long int> ans;
        vector < pair <long long int, long long int> > v;
        for (int i = 1; i <= n; i++)
        {
            long long int x;
            cin >> x;
            x = x % k;
            v.push_back({x,i});
        }

        sort(v.begin(), v.end());
        for (int i = 0; i < n; i++)
        {
            ans.push_back(v[i].second);
        }
        for (int i = 0; i < n; i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
        
    }
    return  0;
}