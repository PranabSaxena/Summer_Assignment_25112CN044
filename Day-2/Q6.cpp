#include <iostream>
using namespace std;
int main() { 
    int n, reverse = 0;
    cout << "enter a number : ";
    cin >> n;
    while( n != 0) {
        int digit = n % 10;
        reverse = reverse * 10 + digit ;
        n = n / 10 ;
    }
    cout << "reverse of the number is : " << reverse << endl;
    return 0;
}