#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int testCases;
    cin >> testCases;

    while (testCases--)
    {
        int n;
        cin >> n;
        long long x = 2, y = 3, z, i = 2;
        cout << x << " " << y << " ";
        while (i < n)
        {
            z = y + 1;
            while ((3 * z) % (x + y) == 0)
                z++;
            x = y;
            y = z;
            cout << y << " ";
            i++;
        }
        cout << endl;
    }

    return 0;
}
