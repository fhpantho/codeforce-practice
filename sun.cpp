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
        if (n < 4)
        {
            cout << 1 << endl;
        }
        else
        {
            long long int sum = 1;
            while (n > 3)
            {
                n = n / 4;
                sum= sum * 2;
            }
            cout << sum << endl;
            
            
        }
        
    }
    return 0;
}