#include <iostream>
using namespace std;
int main () {
int n, original, reverse = 0;
cout << "enter a number : ";
cin >> n;
original = n;
while (n != 0) {
    int digit = n % 10;
    reverse = reverse * 10 + digit ;
    n = n / 10 ;
}
if (original == reverse)
cout << "Entered number is Palindrome";
else
cout << "Entered number is not Palindrome" ;
return 0;
}