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
    // a > b -1 , b > a 1 == 0

    string s1, s2;
    cin >> s1;
    cin >> s2;

    for (int i = 0; i < s1.size(); i++)
    {
        char alpha1 = tolower(s1[i]);
        char alpha2 = tolower(s2[i]);

        s1[i] = alpha1;
        s2[i] = alpha2;
    }
    int result = 0;
    for (int i = 0; i < s1.size(); i++)
    {
        if (s1[i] == s2[i])
        {
            result = 0;
        }
        else if (s1[i] > s2[i])
        {
            result = 1;
            break;
        }
        else if (s1[i] < s2[i])
        {
            result = -1;
            break;
        }
    }
    cout << result;
    return 0;
}