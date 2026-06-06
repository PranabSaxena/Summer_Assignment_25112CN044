#include <iostream>
using namespace std;

int main()
{
    int x, count = 0, rem;
    cout << "enter the no.: ";
    cin >> x;

    while (x!= 0)
    {
        rem = x% 2;
        if (rem == 1)
        {
            count++;
        }
        x = x/2;
    }

    cout << " set bits count is " << count << '\n';
    return 0;
}