#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int digit, sum = 0, count = 0, a, b, x;
    cout << "enter the no.";
    cin >> x;
a = x;
    while (a != 0)
    {
        a = a / 10;
        count++;
    }
    b = x;
    while (b != 0)
    {
        digit = b % 10;
        b = b / 10;
        digit = pow(digit, count);
        sum = sum + digit; 
    }
        if (sum == x)
            cout << "armstrong number" << '\n';
        else
            cout << "not an armstrong number" << '\n';
   
    return 0;
}