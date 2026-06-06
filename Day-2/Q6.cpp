#include <iostream>
using namespace std;
int main() { 
    int n,  remainder, reverse = 0;
    cout << "enter a number : ";
    cin >> n;
 
    while (n != 0) {
    remainder = n % 10;
    reverse = reverse * 10 + remainder;
    n = n / 10;
    }

    cout << "reverse of the number is : " << reverse << '\n';
    return 0;
}