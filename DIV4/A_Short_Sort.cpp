#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <unordered_map>
using namespace std;
int main()
{
    int t;
    cin >> t;
    unordered_map<string, string> mp;
    mp["abc"] = "YES";
    mp["acb"] = "YES";
    mp["bac"] = "YES";
    mp["bca"] = "NO";
    mp["cab"] = "NO";
    mp["cba"] = "YES";
    while (t--)
    {
        string s;
        cin >> s;
        cout << mp[s] << endl;
    }

    return 0;
}