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
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int x = 0, y = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'U')
                y++;
            else if (s[i] == 'R')
                x++;
            else if (s[i] == 'D')
                y--;
            else if (s[i] == 'L')
                x--;
            if (x == 1 && y == 1)
            {
                cout << "YES\n";
                break;
            }
        }
        if (x != 1 || y != 1)
        {
            cout << "NO\n";
        }
    }
    return 0;
}
