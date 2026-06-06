#include <iostream>
using namespace std;

int main()
{
    int x, dec = 0, rem, base = 1;
    cout << " enter the binary no.: ";
    cin >> x;

    while (x !=  0)
    {
        rem = x %10;
        dec = dec +(rem * base);
        base = base * 2;
        x = x /10;
    }

    cout << " decimal is " << dec << '\n';
    return 0;
}
