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
    int testCases;
    cin >> testCases;

    while (testCases--)
    {
        int n, steps, k, H;
        cin >> n >> steps >> k >> H;
        vector<int> hs;
        for (int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;
            hs.push_back(temp);
        }
        vector<int> multp(steps + 1);
        for (int i = 0; i <= steps; i++)
        {
            if (i == 0)
                continue;
            multp[i] = i * k;
        }
        int diff;
    }

    return 0;
}