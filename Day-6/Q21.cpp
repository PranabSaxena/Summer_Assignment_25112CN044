#include <iostream>
using namespace std;

int main()
{
    int x, bin = 0, rem, place = 1;
    cout << "enter the no.: ";
    cin >> x;

    while (x != 0)
    {
        rem = x % 2;
        bin = bin + (rem *place);
        place = place *10;
        x = x / 2;
    }

    cout << " binary is " << bin << '\n';
    return 0;
}