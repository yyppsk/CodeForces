#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;
int main()
{
    int n;
    scanf("%d", &n);
    int sum = 0;
    vector<int> arr;
    int temp;
    for (int i = 0; i < 3 * n; i++)
    {
        scanf("%d", &temp);
        arr.push_back(temp);
    }
    int t = n;
    int k = 0;
    int x = 0, y = 0, z = 0;
    int i = -1;
    while (t--)
    {
        x = x + arr[++i]; // arr[0] arr[3] arr[6]
        sum = sum + arr[i];
        y = y + arr[++i]; // arr[1] arr[4] arr[7]
        sum = sum + arr[i];
        z = z + arr[++i]; // arr[2] arr[5] arr[8]
        sum = sum + arr[i];
        // cout << "X: " << x << " Y: " << y << " Z: " << z << endl;
    }
    // cout << "\n Sum " << sum << endl;
    if (sum == 0)
    {
        if (x == 0 && y == 0 && z == 0)
        {
            printf("YES");
        }
        else
        {
            printf("NO");
        }
    }
    else
    {
        printf("NO");
    }

    return 0;
}