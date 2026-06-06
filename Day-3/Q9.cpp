#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "enter a number : ";
    cin >> n;
    if(n <= 1) {
        cout << "Not a prime number" << '\n';
        return 0;  
    }
for (int i = 2 ; i <= n / 2 ; i++) {
    if (n % i == 0) {
        cout << "Not a prime number" << '\n';
        return 0;
    }
}
cout << "Prime number" << '\n';
return 0;
}