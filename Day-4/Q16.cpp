#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int digit, sum, count, a, b, start, end, i;
    
    cout << "enter the range (start and end): ";
    cin >> start >> end;
    cout << "armstrong numbers in range:\n";

    for (i = start; i <= end; i++) 
    {
        sum = 0;
        count = 0;
        
        a = i;
        while (a != 0)
        {
            a = a / 10; 
            count++;
        }
        
        b = i;
        while (b != 0)
        {
            digit = b % 10;
            b = b / 10; 
            digit = pow(digit, count);
            sum = sum + digit;
        }
        if (sum == i) 
        {
            cout << i << '\n';
        }
    }
    
    return 0;
}