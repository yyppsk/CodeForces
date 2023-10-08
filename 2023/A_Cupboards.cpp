#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
    int t;
    cin >> t;

    int d1zero = 0, d1open = 0, d2zero = 0, d2open = 0;

    int d1, d2;
    while (t--)
    {

        cin >> d1 >> d2;

        if (d1 == 0)
        {
            d1zero++;
        }
        else if (d1 == 1)
        {
            d1open++;
        }

        if (d2 == 0)
        {
            d2zero++;
        }
        else if (d2 == 1)
        {
            d2open++;
        }
    }

    int requiredMin = min(d1zero, d1open) + min(d2zero, d2open);
    cout << requiredMin;
    return 0;
}