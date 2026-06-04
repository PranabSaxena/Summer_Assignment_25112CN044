#include <iostream>
using namespace std;
int main() {
    int a, b, gcd;
    cout << "enter two numbers : ";
    cin >> a >> b;
    int x = a, y = b;
    while(y != 0) {
        int temp = y;
        y = x % y;
        x = temp;
    }
    gcd = x;
    int lcm = (a * b) / gcd;
    cout << "LCM of the two numbers is : " << lcm << endl;
    return 0;
}