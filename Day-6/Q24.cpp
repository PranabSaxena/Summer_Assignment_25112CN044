#include <iostream>
using namespace std;

int main () {
    int ans = 1, x, n, i;
    cout << "enter base and exponent: ";
    cin >> x >> n;

    for (i = 1; i <= n; i++)
    {
        ans = ans * x;
    }

    cout << " answer is " << ans << '\n';
    return 0;
}