#include <bits/stdc++.h>
using namespace std;

bool cmp(const pair<int, int> &a, const pair<int, int> &b)
{
    if (a.first == b.first)
        return a.second < b.second;
    return a.first > b.first;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n, k;
        cin >> n >> k;
        vector<int> result;
        vector<pair<int, int>> v;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (x % k == 0)
            {
                result.push_back(i + 1);
            }
            else
            {
                v.push_back(make_pair(x % k, i + 1));
            }
        }

        sort(v.begin(), v.end(), cmp);

        for (int i = 0; i < v.size(); i++)
        {
            result.push_back(v[i].second);
        }

        for (int i = 0; i < result.size(); i++)
        {
            cout << result[i] << " ";
        }
        cout << endl;
    }
    return 0;
}