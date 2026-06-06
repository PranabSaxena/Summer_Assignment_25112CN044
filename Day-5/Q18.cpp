#include <iostream>
using namespace std;

int main()
{
    int x, a, digit, sum = 0, fact, i;
    cout << "enter the no.: ";
    cin >> x;
    
    a = x;
    while (a != 0)
    {
        digit = a % 10;
        
        fact = 1;
        for (i = 1; i <= digit; i++)
        {
            fact = fact * i;
        }
        
        sum = sum + fact;
        a = a / 10;
    }

    if (sum == x)
        cout << "strong number" << '\n';
    else
        cout << "not a strong number" << '\n';

    return 0;
}