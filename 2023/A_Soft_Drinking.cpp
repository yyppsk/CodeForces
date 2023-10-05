#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
void solve()
{
}
int main()
{ ///// 1  4  5  5  3  10  3  1
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    int totaldrinkml = k * l;            // 20
    int totaltoasts = totaldrinkml / nl; // 20
    int totalslices = d * c;             // 15
    int totalsalt = p / np;              // 10

    cout << min(totaltoasts, min(totalslices, totalsalt)) / n;
    return 0;
}