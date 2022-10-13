#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <unordered_map>
using namespace std;
void solve()
{
}
int main()
{
    map<pair<int, int>, int> mp;
    pair<int, int> p;
    p.first = 1;
    p.second = 2;
    mp[p] = 2;
    cout << mp[p];
    return 0;
}