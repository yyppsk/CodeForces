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
        vector<int> arr;
        int n, k;
        cin >> n >> k;
        for (int i = 0; i < n; i++)
        {
            int tmp;
            cin >> tmp;
            arr.push_back(tmp);
        }
        bool found = false;
        for (const int &ele : arr)
        {
            if (ele == k)
            {
                cout << "YES"
                     << "\n";
                found = true;
                break;
            }
        }
        if (!found)
        {
            cout << "NO"
                 << "\n";
        }
    }

    return 0;
}