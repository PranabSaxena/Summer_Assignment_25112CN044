#include <iostream>
using namespace std;
int main() {
    int n;
    int factorial = 1;
    cout << "enter a number : ";
    cin >> n;

if (n < 0) {
    cout << "factorial is not defined for negative numbers." << '\n';
}

else{
    for (int i = 1; i <= n; i++) {
        factorial *= i;
    }
    
    cout << "factorial of " << n << " is " << factorial << '\n';
}
    return 0;
}