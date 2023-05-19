#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
void solve(int n, vector<int> arr)
{
    long long int ans;
    sort(arr.begin(), arr.end(), greater<int>());
    string s = "";
    for (auto i : arr)
    {
        s.push_back(i);
    }
    cout << s;
}
int main()
{
    int n;
    cin >> n;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        int t;
        cin >> t;
        arr.push_back(t);
    }
    solve(n, arr);
    return 0;
}