#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <unordered_map>
using namespace std;
void solve(int arrsize)
{
    vector<int> arr;
    for (int i = 0; i < arrsize; i++)
    {
        int temp;
        scanf("%d", &temp);
        arr.push_back(temp);
    }
    int maxall = INT_MIN;
    for (int num : arr)
    {
        if (maxall <= num)
            maxall = num;
    }
    int sec = INT_MIN;
    for (int num : arr)
    {
        if (maxall > num)
        {
            sec = max(num, sec);
        }
    }
    if (sec == INT_MIN)
    {
        sec = maxall;
    }
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] > sec)
            arr[i] -= sec;
        else
            arr[i] -= maxall;
    }
    for (auto i : arr)
    {
        cout << i << " ";
    }
    cout << endl;
}
int main()
{
    int t;
    cin >> t;
    int arrsize;
    while (t--)
    {
        cin >> arrsize;
        solve(arrsize);
    }
    return 0;
}