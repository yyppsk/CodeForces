#include <bits/stdc++.h>
using namespace std;

const int MAXN = 2e5 + 5;

int n, a[MAXN], b[MAXN], l, r;

bool check(int len)
{
    for (int i = 1; i + len - 1 <= n; i++)
    {
        bool ok = true;
        for (int j = i + len - 1, k = l; j >= i; j--, k++)
        {
            if (a[j] != b[k])
            {
                ok = false;
                break;
            }
        }
        if (ok)
        {
            l = i;
            r = i + len - 1;
            return true;
        }
    }
    return false;
}

void solve()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    for (int i = 1; i <= n; i++)
    {
        cin >> b[i];
    }
    int last = -1;
    for (int i = 1; i <= n; i++)
    {
        if (a[i] != b[i])
        {
            if (last == -1)
            {
                last = i;
            }
        }
        else
        {
            if (last != -1)
            {
                int len = i - last;
                if (!check(len))
                {
                    len--;
                    check(len);
                }
                cout << l << " " << r << "\n";
                return;
            }
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
