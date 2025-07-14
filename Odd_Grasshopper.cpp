#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {

        long long int x,n;
        cin >> x >> n;
        long long int D;
        switch (n % 4)
        {
        case 0:
            D = 0;
            break;
        case 1:
            D = -n;
            break;
        case 2:
            D = 1;
            break;
        case 3:
            D = n + 1;
            break;
        default:
            break;
        }

        if (x % 2 == 0)
        {
            cout << x + D << endl;
        }
        else
        {
            cout << x - D << endl;
        }
        

    }
    return 0;
}