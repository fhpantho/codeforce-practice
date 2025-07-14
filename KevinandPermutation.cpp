#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        if (k == 1)
        {
            for (int i = 0; i < n; i++)
            {
                cout << i + 1 << " ";
            }   
        }
        else
        {
            int s = 1;
            int e = k;
            int f;
            for (int i = n; i != s; i--)
            {
                if(e == 1)
                {
                    cout << s << " ";
                    s++;
                    e = k;
                    i++;
                }
                else
                {
                    cout << i << " ";
                    e--;
                }
                f = i - 1;

            }
            cout << f << " ";
            
        }
        cout << endl;
        
    }
    return 0;
}