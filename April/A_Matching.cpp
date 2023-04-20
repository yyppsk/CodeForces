#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <math.h>
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
        string s;
        cin >> s;
        int rememberfirst = 0;
        if (s[0] == '?')
        {
            rememberfirst = 1;
        }
        /*
        int sawanyquestion = 0;
        if (s.size() == 1 && s[0] == '?')
        {
            s = "9";
            sawanyquestion = 1;
        }
        else if (s.size() == 1 && s[0] == '9')
        {
            s = "1";
        }
        if (rememberfirst == 1)
        {
            cout << s;
        }
        cout << s;
        */
        int cnt = 0;
        for (auto i : s)
        {
            if (i == '?')
                cnt++;
        }
        int res = 0;
        if (s.size() == 1 && s == "0")
            res = 0;
        else if (s.size() == 1 && s == "9")
            res = 1;
        else if (s.size() >= 2 && s[0] == '0')
            res = 0;
        else if (rememberfirst == 1 && s.size() >= 2)
            res = pow(10, cnt) - 10;
        else if (s.size() == 1 && s[0] == '?')
            res = 9;
        else
            res = pow(10, cnt);
        cout << res << endl;
    }
    return 0;
}