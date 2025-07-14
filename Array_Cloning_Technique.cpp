#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {

        long long int n;
        cin >> n;
        long long int a[n];
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];    
        }
        int ans = 0;

        map<int , int> feq;
        for(int i = 0; i < n; i++)
        {
            feq[a[i]]++;
        }
        int max_freq = 0;
        for(auto it : feq)
        {
            max_freq = max(max_freq , it.second);
        }
        while ((max_freq < n))
        {
            int remaining = n - max_freq;
            int add = max_freq;
            ans++;
            ans = ans + min(add, remaining);
            max_freq = max_freq + min(add, remaining);
            
        }
        cout << ans << endl;
        

    }
    return 0;
}