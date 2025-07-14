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
        int x, y, z;
        vector<int> a(n);
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        bool found = false;
        for (int i = 1; i < n - 1 && !found; i++)
        {
            y = i;
            for (int j = i - 1; j >= 0; j--)
            {
                if (a[j] < a[i])
                {
                    x = j;
                    for (int k = i + 1; k < n; k++)
                    {
                        if (a[k] < a[i])
                        {
                            z = k;
                            found = true;
                            break;
                        }
                    }
                    break; 
                }
            }
        }

        if (!found)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
            cout << x + 1 << " " << y + 1 << " " << z + 1 << endl;
        }
    }
    return 0;
}
