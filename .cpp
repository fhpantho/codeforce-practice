#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int sum = 0;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> ars[i];
        }
        int seg = 0;
        for (int i = 0; i < n; i++)
        {
            if (ars[i] == 0)
            {
                continue;
            }
            else if (i == n - 1 || ars[i + 1] == 0)
            {
                seg++;
            }
        }

        if (seg == 0)
        {
            cout << 0 << endl;
        }
        else if (seg == 1)
        {
            cout << 1 << endl;
        }
        else
        {
            cout << 2 << endl;
        }
    }
    return 0;
}