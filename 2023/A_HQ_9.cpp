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
    string s;
    cin >> s;
    bool valid = false;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'H' || s[i] == 'Q' || s[i] == '9')
        {
            valid = true;
            break;
        }
    }
    if (valid)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}