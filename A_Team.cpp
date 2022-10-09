#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
//4 minute 21 seconds
int main()
{
    int p, v, t, c;
    int count = 0;
    scanf("%d", &c);
    for (int i = 0; i < c; i++)
    {
        scanf("%d %d %d", &p, &v, &t);
        if (p + v + t >= 2)
        {
            count++;
        }
    }
    cout << count;
    return 0;
}