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
        int n, m;
        cin >> n >> m;
        // x & s
        string s1, s2;

        cin >> s1 >> s2;

        bool position = false;

        for (int i = 0; i <= 6; i++)
        {
            if (s1.find(s2) != -1)
            {
                position = true;
                cout << i << "\n";
                break;
            }
            s1 += s2;
        }
        if (!position)
            cout << "-1\n";
    }

    return 0;
}