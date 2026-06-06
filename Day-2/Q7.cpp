#include <iostream>
using namespace std ;
int main() {
    int n;
    int product = 1;
    cout << "enter a number : ";
    cin >> n;
   
    while ( n!= 0) {
    product *= n % 10;
    n /= 10;
    }
    
    cout << "product of the digits is : " << product << '\n';
    return 0;
}