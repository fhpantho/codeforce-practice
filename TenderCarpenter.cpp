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
        int a[n];
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        bool flag = true;

        for (int i = 0; i < n-1; i++)
        {
            if((a[i] * 2 > a[i+1]) && (a[i+1] * 2 > a[i]))
            {
                flag = false;
                break;
            }
        }
        if(flag)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
        
    }   
    return 0;
}