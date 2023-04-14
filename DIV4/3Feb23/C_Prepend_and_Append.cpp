#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
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
        int i = 0, j = n - 1;
        while (i <= j)
        {
            if (s[i] != s[j])
            {
                i++;
                j--;
                n = n - 2;
            }
            else
            {
                break;
            }
        }
        cout << n << endl;
    }

    return 0;
}