#include <iostream> 
using namespace std ;
int main() {
    int n, digit, sum = 0;
    cout << "enter a number : " ;
    cin >> n;

    while (n != 0) {
      sum += n % 10 ;
      n /=10;
    }

    cout << "sum of digits is : " << sum << '\n';
    return 0;
 }