#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> arr(n);
        for(int i = 0; i < n; i++)
        {
            cin >> ars[i];
        }

        map<int , int> mp;
        for(int i = 0; i < n; i++)
        {
            mp[ars[i]]++;
        }
        int maxelement = 0;
        int maxindex;
        for(auto it : mp)
        {
            if (maxelement < it.second)
            {
                maxelement = it.second;
                maxindex = it.first;
            }
            
        }
    }
    return 0;
}