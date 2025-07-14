#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int a;
        long long int Zero = 0;
        long long int One = 0;
        for(int i = 0; i < n; i++)
        {
            cin >> a;
            if(a == 0)
            {
                Zero++;
            }
            if(a == 1)
            {
                One++;
            }

            
        }
        long long int sum = pow(2,Zero) * One;
            cout << sum << endl;
    }
    return 0;
}