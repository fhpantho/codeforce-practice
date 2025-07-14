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
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> ars[i];
        }
        int result = 0;
        bool flag = true;
        for (int i = n - 2; i >= 0; i--)
        {
            while(ars[i] >= arr[i+1] && ars[i] > 0)
            {
                ars[i] = ars[i]/2;
                result++;
            }

            if (ars[i] == ars[i + 1])
            {
                cout << -1 << endl;
                flag = false;
                break;
            }
            
        }
        if(flag)
        {
            cout << result << endl;
        }
        
        
        
    }
    return 0;
}