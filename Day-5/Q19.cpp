#include <iostream>
using namespace std;

int main()
{
    int x, i;
    cout << "enter the no.: ";
    cin >> x;

    cout << "factors are: " << '\n';
    for (i = 1; i <= x; i++)
    {
        if (x % i == 0)
        {
            cout << i << '\n';
        }
    }

    return 0;
}