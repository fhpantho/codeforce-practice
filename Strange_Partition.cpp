#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long int n, x;
        cin >> n >> x;
        vector <long long int> v(n);
        long long int sum = 0;
        long long int maximum_sum = 0;
        for(int i = 0; i < n; i++)
        {
            cin >> v[i];
            sum += v[i];
            if(v[i] % x != 0)
            {
                maximum_sum = maximum_sum + (v[i] / x) + 1;
            }
            else
            {
                maximum_sum = maximum_sum + (v[i] / x);
            }
        }
        long long int Minimum;
        if(sum % x != 0)
            Minimum = (sum / x) + 1;
        else
            Minimum = (sum / x);
            
        cout << Minimum << " " << maximum_sum << endl;


    }
    return 0;
}