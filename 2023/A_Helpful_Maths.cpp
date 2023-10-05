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
    string sum;
    cin >> sum;
    int one = 0, two = 0, three = 0;
    if (sum.size() == 1)
    {
        cout << sum;
        return 0;
    }
    for (int i = 0; i < sum.size(); i++)
    {
        if (sum[i] == '1')
        {
            one++;
        }
        if (sum[i] == '2')
        {
            two++;
        }
        if (sum[i] == '3')
        {
            three++;
        }
    }
    // if (one > 1 && two == 0 && three == 0)
    // {
    //     for (int i = 0; i < one; i++)
    //     {
    //         if (i < one - 1)
    //             cout << 1 << "+";
    //         else
    //             cout << 1;
    //     }
    // }
    // else if (two > 1 && one == 0 && three == 0)
    // {
    //     for (int i = 0; i < two; i++)
    //     {
    //         if (i < two - 1)
    //             cout << 2 << "+";
    //         else
    //             cout << 2;
    //     }
    // }
    // else if (three > 1 && one == 0 && two == 0)
    // {
    //     for (int i = 0; i < three; i++)
    //     {
    //         if (i < three - 1)
    //             cout << 3 << "+";
    //         else
    //             cout << 3;
    //     }
    // }

    string ans = "";
    for (int i = 0; i < one; i++)
    {
        ans.push_back('1');
        ans.push_back('+');
    }
    for (int i = 0; i < two; i++)
    {
        ans.push_back('2');
        ans.push_back('+');
    }
    for (int i = 0; i < three; i++)
    {
        ans.push_back('3');
        ans.push_back('+');
    }
    ans.pop_back();
    cout << ans;
    return 0;
}