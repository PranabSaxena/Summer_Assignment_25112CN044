#include <iostream>
using namespace std;
int main() 
{
    int a = 0, b = 1, c, n;
    cout << "enter number of terms : ";
    cin >> n;
    cout << n << "terms of fibonnaci series are :" << endl << a << " " << b << " ";
    for (int i = 1; i <=n; i++)
    {
        c = a + b;
        cout << c << " ";
        a = b;
        b = c;
    }
    return 0;
}