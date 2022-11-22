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
        int strlen;
        cin >> strlen;
        string s;
        cin >> s;
        int minn = INT_MIN;
        for (int ch : s)
        {
            minn = max(minn, ch - 96);
        }
        cout << minn << endl;
    }
    return 0;
}