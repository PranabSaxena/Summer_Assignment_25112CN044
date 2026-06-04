#include <iostream>
using namespace std ;
int main() {
    int n;
    long long product = 1;
    cout << "enter a number : ";
    cin >> n;
    while (n != 0) {
        product *= (n % 10);
        n = n / 10;
    }
    cout << "product of the digits is : " << product << endl;
    return 0;
}