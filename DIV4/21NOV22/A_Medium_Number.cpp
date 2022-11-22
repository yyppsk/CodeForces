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
    scanf("%d", &t);
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if (a > b && a > c)
        {
            cout << max(b, c) << endl;
        }
        else if (b > a && b > c)
        {
            cout << max(a, c) << endl;
        }
        else
        {
            cout << max(b, a) << endl;
        }
    }
    return 0;
}