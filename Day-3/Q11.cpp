#include <iostream>
using namespace std;
int main() {
    int gcd, a, b;
    cout << "enter two numbers ; ";
    cin >> a >> b;

    for (int i = 1; i <= a && i <= b; i++)
    {
        if (a % i == 0 && b % i == 0)
            gcd = i;
    }

    cout << "GCD of the two numbers is : " << gcd << '\n';
    return 0;
} 