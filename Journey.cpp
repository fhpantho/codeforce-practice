#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n, a, b, c;
        cin >> n >> a >> b >> c;
        long long int sum = a + b + c;
        long long int avarage = n / sum;
        long long int day = avarage * 3;
        long long int remain = n - avarage * sum;
        if (remain > 0)
        {
            if (remain <= a)
            {
                day = day + 1;
            }
            else if (remain <= a + b)
            {
                day = day + 2;
            }
            else if (remain < a + b + c)
            {
                day = day + 3;
            }
            cout << day << endl;
        }
        else
        {
            cout << day << endl;
        }
    }
    return 0;
}