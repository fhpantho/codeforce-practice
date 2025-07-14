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
        string s;
        cin >> s;
        bool flag = true;
        int p_count = 0;
        int s_count = 0;
        int dot_count = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'p')
            {
                p_count++;
            }
            else if (s[i] == 's')
            {
                s_count++;
            }
            else
            {
                dot_count++;
            }
        }
        if (s[0] == 's' || s_count == n || p_count == n || dot_count == n || s[n - 1] == 'p')
        {
            cout << "YES" << endl;
        }
        else if (dot_count != 0 && p_count == 0 && s_count != 0)
        {
            cout << "YES" << endl;
        }
        else if ((dot_count != 0 && p_count != 0 && s_count == 0))
        {
            cout << "YES" << endl;
        }
        else if(s[0] == '.' && s[n-1] == '.')
        {
            cout << "NO" << endl;
        }
        else
        {
            char init[1];
            for (int i = 0; i < n; i++)
            {
                if (s[i] == '.')
                {
                    continue;
                }
                else if (s[i] == 'p')
                {
                    cout << "NO" << endl;
                    break;
                }
                else
                {
                    init[0] = s[i];
                    break;
                }
                char last[1];
                for (int i = n -1 ; i <= 0; i++)
                {
                    if (s[i] == '.')
                    {
                        continue;
                    }
                    else if (s[i] == 's')
                    {
                        cout << "NO" << endl;
                        break;
                    }
                    else
                    {
                        last[0] = s[i];
                        break;
                    }
                }
                if (init [0] == 's' && last[0] == 'p')
                {
                    cout << "YES" << endl;
                }
                
            }
        }
    }
    return 0;
}