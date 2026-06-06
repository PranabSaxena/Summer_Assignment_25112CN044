#include <iostream>
using namespace std;
int main()
{
    int a = 0, b = 1, c, n;
    cout << "enter the value of n: ";
    cin >> n;
    cout << n << "nth term of fibonnaci series is :" << endl;
    if (n == 1)
    {
        cout << a;
    }
    else if (n == 2)
    {
        cout << b;
    }
    else
    {
        for (int i = 1; i <= n - 2; i++)
        {
            c = a + b;
            a = b;
            b = c;
        }
        cout << c;
    }
    return 0;
}