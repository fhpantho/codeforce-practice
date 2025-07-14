#include <bits/stdc++.h>
using namespace std;

class problem
{
    public:
    int n;

    problem(int n)
    {
        this -> n = n;
    }

};

int main()
{
    problem p(6);
    p.n = 5;
    cout << p.n << endl;
    return 0;
}