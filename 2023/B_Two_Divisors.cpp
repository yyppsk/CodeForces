#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

bool isDivisible(long long n)
{
    for (long long i = 2; i * i <= n; i++)
        if (n % i == 0)
            return true;
    return false;
}

long long find_x(long long a, long long b)
{
    __int128 x = (__int128)a * b;
    if (x > 1000000000 || isDivisible(x / a) || isDivisible(x / b))
    {
        return -1;
    }
    else
    {
        return (long long)x;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long a, b;
        cin >> a >> b;
        cout << find_x(a, b) << "\n";
    }

    return 0;
}