#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool isBeautifulArray(const vector<int> &a)
{
    int n = a.size();
    bool hasEven = false, hasOdd = false;

    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
            hasEven = true;
        else
            hasOdd = true;
    }

    return !(hasEven && hasOdd);
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        if (isBeautifulArray(a))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
