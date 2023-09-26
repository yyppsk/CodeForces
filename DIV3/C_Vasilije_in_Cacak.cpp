#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool isCombinationSumValid(long long n, long long k, long long x)
{
    // Calculate the minimum and maximum possible sums of a combination of size k.
    long long minSum = k * (k + 1) / 2;
    long long maxSum = k * (2 * n - k + 1) / 2;

    // Check if x is within the valid sum range.
    return (x >= minSum && x <= maxSum);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, k, x;
        cin >> n >> k >> x;

        if (isCombinationSumValid(n, k, x))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
