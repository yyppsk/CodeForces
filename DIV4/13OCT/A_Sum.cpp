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
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if (a + b == c)
            cout << "YES\n";
        else if (c + b == a)
            cout << "YES\n";
        else if (a + c == b)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}