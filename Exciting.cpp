#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int x, y;
        cin >> x >> y;
        if (x == y)
        {
            cout << 0 << " " << 0 << endl;
        }
        else
        {
            long long int Eximent = abs(x - y);
            long long int mov = min((x % Eximent), abs((x % Eximent) - Eximent));
            cout << Eximent << " " << mov << endl;       }
    }
    return 0;
}