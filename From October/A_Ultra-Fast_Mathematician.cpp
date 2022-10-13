#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
void solve(string s1, string s2)
{
    int n = s1.size();
    int i = 0;
    string ans = "";
    while (i < n)
    {
        if (s1[i] != s2[i])
            ans.push_back('1');
        else
            ans.push_back('0');
        i += 1;
    }
    cout << ans;
}
int main()
{
    string s1, s2;
    cin >> s1;
    cin >> s2;
    solve(s1, s2);
    return 0;
}