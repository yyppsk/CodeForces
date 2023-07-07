#include <iostream>
#include <vector>
#include <utility>

using namespace std;

int main()
{
    int n, u = 0;
    cin >> n;
    while (n--)
    {
        int size = 0;
        cin >> size;
        while (--size)
        {
            /* code */

            int x, y;
            cin >> x >> y;
            if (x > y)
            {
                u++;
            }
        }
        cout << u << endl;
        u = 0;
    }

    return 0;
}
