#include <iostream>
using namespace std;
int main()
{
    int i, a, b, gcd;
    cout << "enter two numbers : ";
    cin >> a >> b;
    int x = a, y = b;

    for (i = 1; i <= x && i <= y; i++)
    {
        if (x % i == 0 && y % i == 0)
        {
            gcd = i;
        }
    }
    int lcm = (a * b) / gcd;
    cout << "LCM of the two numbers is : " << lcm << endl;
    return 0;
}