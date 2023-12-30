#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
int gcd(int a, int b)
{
    while (true)
    {
        if (a == 0)
            return b;
        b %= a;
        if (b == 0)
            return b;
        a %= b;
    }
}
int lcm(int a, int b)
{
}
int main()
{
    return 0;
}