#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int n = s.size();
        int ODD = 0, EVE = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                ODD++;
            }
            else
            {
                EVE++;
            }
        }
        int valid = min(ODD, EVE);
        if (valid % 2 == 0)
        {
            cout << "NET" << endl;
        }
        else
        {
            cout << "DA" << endl;
        }
    }
    return 0;
}