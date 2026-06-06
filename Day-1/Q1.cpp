#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;
    cout << "enter a no." << '\n';
    cin >> n;

    for(int i=0; i<=n; i++) {
        sum +=i;
}

cout << "sum of first " << n << "natural numbers is =" << sum << '\n';
return 0;
}