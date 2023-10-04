#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
void solve()
{
}
int main()
{
    int x1, y1;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            int t;
            cin >> t;
            if (t == 1)
            {
                x1 = i;
                y1 = j;
            }
        }
    }
    int D = abs(2 - x1) + abs(2 - y1);
    cout << D << "\n";
    return 0;
}