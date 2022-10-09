#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
//57 mins
int main()
{
    int a[4];
    int count = 0;
    scanf("%d %d %d %d", &a[0], &a[1], &a[2], &a[3]);
    sort(a, a + 4);
    for (int i = 0; i < 3; i++)
    {
        if (a[i] == a[i + 1])
            count++;
    }
    cout << count;
    return 0;
}