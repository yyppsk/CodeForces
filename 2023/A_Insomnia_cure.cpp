#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    int k, l, m, n, d;
    cin >> k >> l >> m >> n >> d;

    // Method 1 Space O(d)
    // TC = O(K) + O(L) + O(M) + O(N) + O(d)

    int marking[d + 1] = {0};
    // for k
    for (int i = k; i <= d; i += k)
    {
        marking[i] = 1;
    }
    for (int i = l; i <= d; i += l)
    {
        marking[i] = 1;
    }
    for (int i = m; i <= d; i += m)
    {
        marking[i] = 1;
    }
    for (int i = n; i <= d; i += n)
    {
        marking[i] = 1;
    }
    int count = 0;

    for (int i = 1; i < d + 1; i++)
    {
        if (marking[i])
            count++;
        // cout << marking[i] << " ";
    }

    // Method 2 Space O(1) constant
    // TC = O(d)
    int count2 = 0;
    for (int i = 1; i <= d; i++)
    {
        if (i % k == 0)
            count2++;
        else if (i % l == 0)
            count2++;
        else if (i % m == 0)
            count2++;
        else if (i % n == 0)
            count2++;
    }
    cout << count2;
    return 0;
}