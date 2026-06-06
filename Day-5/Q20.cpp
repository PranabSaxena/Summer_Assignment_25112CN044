#include <iostream>
using namespace std;

int main()
{
    int x, i, largest = -1;
    cout << "enter the no.: ";
    cin >> x;

    for (i = 2; i <= x; i++)
    {
        while (x % i == 0)
        {
            largest = i;
            x = x / i;
        }
    }

    cout << "largest prime factor is " << largest << '\n';

    return 0;
}