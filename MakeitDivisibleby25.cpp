#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        int n = s.size();
        int count = n;
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                int num = ((s[i] - '0') * 10) + (s[j] - '0');
                if(num % 25 == 0)
                {
                    count = min(count, n - i - 2);
                }
            }
            
        }
        cout << count << endl;        


    }
    return 0;
}