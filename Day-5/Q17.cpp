#include <iostream>
using namespace std;

int main()
{
    int x, i, sum = 0;
    cout << "enter the no.: ";
    cin >> x;

    for (i = 1; i < x; i++)
    {
        if (x % i == 0)
        {
            sum = sum + i;
        }
    }

    if (sum == x)
        cout << "perfect number" << '\n';
    else
        cout << "not a perfect number" << '\n';

    return 0;
}