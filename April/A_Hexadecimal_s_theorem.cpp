#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <unordered_map>
using namespace std;
void solve(int n)
{
    long long int x = 0, y = 1, z = 0;
    // if (n > 47)
    // {
    //     cout << "I'm too stupid to solve this problem" << endl;
    //     return;
    // }
    if (n == 0)
    {
        cout << 0 << " " << 0 << " " << 0;
        return;
    }
    if (n == 1)
    {
        cout << 1 << " " << 0 << " " << 0;
        return;
    }
    if (n == 2)
    {
        cout << 1 << " " << 1 << " " << 0;
        return;
    }
    if (n == 3)
    {
        cout << 1 << " " << 1 << " " << 1;
        return;
    }
    vector<long long int> poss(50, 0);
    for (int i = 0; i < 50; i++)
    {
        poss[i] = x;
        z = x + y;
        x = y;
        y = z;
    }
    for (int i = 1; i < 50; i++)
    {
        int j = i + 1;
        int k = 50 - 1;
        while (j < k)
        {
            if (poss[i] + poss[j] + poss[k] == n)
            {
                i = poss[i], j = poss[j], k = poss[k];
                cout << i << " " << j << " " << k << endl;
                return;
            }
            else if (poss[i] + poss[j] + poss[k] < n)
            {
                j++;
            }
            else
            {
                k--;
            }
        }
    }
    cout << "I'm too stupid to solve this problem" << endl;
}
int main()
{
    long long int n;
    cin >> n;

    solve(n);

    return 0;
}