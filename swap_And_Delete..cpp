#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int n = s.size();
        long long ONE = 0, ZERO = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
                ONE++;
            else
                ZERO++;
        }
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                if (ZERO > 0)
                {
                    ZERO--;
                }
                else
                {
                    break;
                }
            }
            else
            {
                if (ONE > 0)
                {
                    ONE--;
                }
                else
                {
                    break;
                }
            }
            
        }
        cout << ONE + ZERO << endl;
        
    }
    return 0;
}