#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

// Function to compute factorial
long long factorial(int n) {
    long long result = 1;
    for (int i = 2; i <= n; ++i) {
        result *= i;
    }
    return result;
}

void solve() {
    int t;
    cin >> t;  
    while (t--) {
        int n, d;
        cin >> n >> d;  
        
        
        long long fact = factorial(n);
        
        
        vector<int> divisors;
        
       
        for (int digit : {1, 3, 5, 7, 9}) {
            if (digit == 1) {
                divisors.push_back(1);
            }
            else if (digit == 3) {
                if ((fact * d) % 3 == 0) { 
                    divisors.push_back(3);
                }
            }
            else if (digit == 5) {
                if (d == 5) {  
                    divisors.push_back(5);
                }
            }
            else if (digit == 7) {
                if ((fact * d) % 7 == 0) {  
                    divisors.push_back(7);
                }
            }
            else if (digit == 9) {
                if ((fact * d) % 9 == 0) {  
                    divisors.push_back(9);
                }
            }
        }
        
        
        if (divisors.empty()) {
            cout << "-1" << endl;
        } else {
            for (int i = 0; i < divisors.size(); ++i) {
                cout << divisors[i];
                if (i != divisors.size() - 1) cout << " ";
            }
            cout << endl;
        }
    }
}

int main() {
    solve();
    return 0;
}