#include <iostream>
using namespace std;

void primeFactorization(long long n) 
{
    long long Two = 0;
    while (n % 2 == 0) 
    {
        Two++;
        n /= 2;
    }
    long long Three = 0;


    
        while (n % 3 == 0) 
        {
            Three++;
            n /= 3;
        }
    if (n > 1) 
    {
        cout << -1 << endl;
    }
    else if(Two > Three) 
    {
        cout << -1 << endl;
    }
    else 
    {
        cout << (Three - Two) + Three << endl;
    }

}

int main() 
{
    long long t;
    cin >> t;
    while (t--) 
    {
        long long n;
        cin >> n;
        primeFactorization(n);
    }
    return 0;
}
