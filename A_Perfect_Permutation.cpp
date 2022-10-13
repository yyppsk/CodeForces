#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if (n % 2 != 0)
        cout << "-1";
    else
    {
        vector<int> a;
        for (int i = 1; i <= n; i++)
        {
            a.push_back(i);
        }
        for (auto i : a)
        {
            cout << i << " ";
        }
        cout << endl;
        int i = 0, j = 1;
        while (i < a.size())
        {
            swap(a[i], a[j]);
            i += 2;
            j += 2;
        }
        for (auto i : a)
        {
            cout << i << " ";
        }
    }
    return 0;
}