#include <bits/stdc++.h>
using namespace std;

void code()
{
    long long int n, p;
    cin >> n >> p;
    vector<long long int> arr1(n),arr2(n);
    for (long long int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }
    for (long long int i = 0; i < n; i++)
    {
        cin >> arr2[i];
    }

    long long int ans = p;

    vector<pair<long long int, long long int> > vecc;
    for (long long int i = 0; i < n; i++)
    {
        vecc.push_back(make_pair(min(p,arr2[i]), arr1[i]));
    }

    sort(vecc.begin(), vecc.end());
    long long int person = n - 1;

    for (long long int i = 0; i < n-1; i++)
    {
        ans += min(vecc[i].second, person) * vecc[i].first;
        person -= min(person, vecc[i].second);

    }

    cout << ans << endl;
    
    
    
    
    
}

int main()
{
    long long int t;
    cin >> t;
    while (t--)
    {
        code();
    }
    return 0;
}