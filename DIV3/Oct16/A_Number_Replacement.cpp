#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int veclen;
        cin >> veclen;
        vector<int> vec;
        for (int i = 0; i < veclen; i++)
        {
            int temp;
            cin >> temp;
            vec.push_back(temp);
        }
        string s;
        cin >> s;
        unordered_map<char, int> mp;
        for (int i = 0; i < s.size(); i++)
        {
            mp[s[i]] = vec[i];
        }
        for (auto i : mp)
        {
            cout << i.first << " " << i.second << endl;
        }
    }
    return 0;
}