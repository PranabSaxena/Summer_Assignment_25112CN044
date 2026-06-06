#include <iostream>
using namespace std;
int main()
{
    int start, end;
    cout << "enter starting no. of range :";
    cin >> start;
    cout << "enter ending no. of range :";
    cin >> end;

    if (start < 2)
    {
        start = 2;
    }

    for (int i = start; i <= end; i++)
    {
        int count = 0;
        for (int j = 2; j <= i / 2; j++)
        {
            if (i % j == 0)
            {
                count++;
            }
        }
        if (count == 0)
            cout << i << '\n';
    }

    return 0;
}