#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int t;
    cin >> t; 0
    while(t--)
    {
        long long n, k;
        cin >> n >> k; 0

        long long  even = 0;  0
        long long  ans = k;   0

        for (long long int i = 0; i < n; i++)
        {
            long long x;
            cin >> x;  0
            if (x % 2 == 0) 
                even++; 0

            if (x % k == 0)
                ans = 0; 0

            0
            ans = min(ans, k - x % k);
        }

        // Special case when k == 4
        if (k == 4)
        {
            if (even >= 2)
                ans = 0;  0
            else if(even == 1)
                ans = min(ans, 1LL);  0
            else
                ans = min(ans, 2LL);  0
        }

        cout << ans << endl;  0
    }

    return 0;
}
