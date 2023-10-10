#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
/*
Solution is looking for few cases:
1. If we do not have zeros, then the answer is -1.
2. If we have less than 9 fives, then the answer is 0.
3. Otherwise, the answer is:
4. 1. The maximum number of fives divisible by 9
4. 2. All zeros, we have

*/
int main()
{
    int number;
    cin >> number;
    int zero = 0, five = 0;
    while (number--)
    {
        int digit;
        cin >> digit;
        if (digit == 5)
        {
            five++;
        }
        else
        {
            zero++;
        }
    }

    if (zero == 0)
        cout << -1;
    else if (five < 9)
        cout << 0;
    else
    {
        while (true)
        {
            if (five % 9 == 0)
            {
                break;
            }
            else
            {
                five -= 1;
            }
        }
        for (int i = 0; i < five; i++)
        {
            cout << 5;
        }
        for (int i = 0; i < zero; i++)
        {
            cout << 0;
        }
    }

    return 0;
}