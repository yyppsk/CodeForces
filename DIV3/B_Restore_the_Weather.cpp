#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

vector<int> determineTemperatures(vector<int> &a, vector<int> &b, int k)
{

    unordered_map<int, int> freq;
    for (auto i : b)
    {
        freq[i]++;
    }
    vector<int> res;
    for (auto i : a)
    {
        if (freq.find(i - k) != freq.end())
            res.push_back(i - k);
    }
    for (auto i : res)
    {
        cout << i << " ";
    }
    return res;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        vector<int> a(n);
        vector<int> b(n);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        determineTemperatures(a, b, k);
    }

    return 0;
}
