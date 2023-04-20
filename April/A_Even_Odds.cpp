#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
    long long int range, k;
    cin >> range >> k;
    // Even Case & Odd case
    //USED Nth number in an Arithmetic progression
    if (range % 2 == 0)
    {
        if (k <= (range / 2))
        {
            cout << 1 + (k - 1) * 2;
        }
        else
        {
            cout << 2 + ((k - (range / 2)) - 1) * 2;
        }
    }
    else
    {
        if (k <= (range / 2) + 1)
        {
            cout << 1 + (k - 1) * 2;
        }
        else
        {
            cout << 2 + (((k - 1) - (range / 2)) - 1) * 2;
        }
    }
    return 0;
}