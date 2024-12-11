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
            cin >> arr[i];
        }
        int result = 0;
        bool flag = true;
        for (int i = n - 2; i >= 0; i--)
        {
            while(arr[i] >= arr[i+1] && arr[i] > 0)
            {
                arr[i] = arr[i]/2;
                result++;
            }

            if (arr[i] == arr[i + 1])
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