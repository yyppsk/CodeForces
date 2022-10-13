#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <string>
using namespace std;
int gcdExtended(int a, int b, int *x, int *y)
{
    // Base Case
    if (a == 0)
    {
        *x = 0;
        *y = 1;
        return b;
    }

    int x1, y1; // To store results of recursive call
    int gcd = gcdExtended(b % a, a, &x1, &y1);

    // Update x and y using results of
    // recursive call
    *x = y1 - (b / a) * x1;
    *y = x1;
    return gcd;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    map<pair<int, int>, int> mp;
    int t;
    scanf("%d", &t);
    int f = 1;

    for (f = 1; f <= t; f++)
    {
        int n;
        scanf("%d", &n);
        // cout << "Inp " << n << endl;
        vector<int> arr(n + 1);
        // cout << "took " << n << endl;
        for (int i = 1; i <= n; i++)
        {
            int temp;
            scanf("%d", &temp);
            arr[i] = temp;
        }
        int mx = -1000;
        int x, y;
        for (int j = 1; j <= n; j++)
        {
            for (int k = j; k <= n; k++)
            {
                int gc;
                pair<int, int> p;
                p.first = arr[j];
                p.second = arr[k];
                pair<int, int> p2;
                p2.first = arr[k];
                p2.second = arr[j];
                // cout << p.first << " : " << arr[k] << endl;
                if (mp.find({arr[j], arr[k]}) != mp.end() || (mp.find({arr[k], arr[j]}) != mp.end()))
                {
                    gc = mp[p];
                    cout << p.first << "," << arr[k] << " " << gc << endl;
                    if (gc == 1)
                    {
                        mx = max(mx, j + k);
                    }
                    gc = mp[p2];
                    if (gc == 1)
                    {
                        mx = max(mx, j + k);
                    }
                }
                else
                {
                    gc = gcdExtended(arr[j], arr[k], &x, &y);
                    mp[p] = gc;
                    mp[p2] = gc;
                }
            }
        }
        if (mx == -1000)
            printf("-1\n");
        else
            printf("%d\n", mx);
        // cout << f << endl;
    }
    return 0;
}