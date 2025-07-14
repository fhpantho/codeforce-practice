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
        string t;
        cin >> t;
        int arr[26] = {0};
        for(int i = 0; i < t.size(); i++)
        {
            arr[t[i] - 'A']++;
        }
        string temp = "";
        int k = 0;

        for (int i = s.size() - 1; i >= 0; i--)
        {
            if(arr[s[i] - 'A'] > 0)
            {
                arr[s[i] - 'A']--;
                temp += s[i];
            }
        }

        reverse(temp.begin(), temp.end());
        if (temp == t)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
        
        
        
        

    }
    return 0;
}