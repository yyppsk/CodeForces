#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;
pair<int, int> findMax(vector<int> &arr)
{
    int maxi = 0;
    int maxNum = INT_MIN;
    for (int i = 0; i < arr.size(); i++)
    {
        if (maxNum < arr[i])
        {
            maxi = i;
            maxNum = arr[i];
        }
    }
    return {maxi, maxNum};
}
pair<int, int> findMin(vector<int> &arr)
{
    int maxi = 0;
    int maxNum = INT_MAX;
    for (int i = 0; i < arr.size(); i++)
    {
        if (maxNum >= arr[i])
        {
            maxi = i;
            maxNum = arr[i];
        }
    }
    return {maxi, maxNum};
}
int main()
{
    // Write C++ code here
    vector<int> arr;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int tmp;
        cin >> tmp;
        arr.push_back(tmp);
    }
    int s = 0, e = 0;
    //
    // cout << mxp.first << ":" << mxp.second << endl;
    pair<int, int> minp = findMin(arr);
    // cout << minp.first << ":" << minp.second << endl;
    while (minp.first < arr.size() - 1)
    {

        if (minp.first < arr.size())
        {
            swap(arr[minp.first], arr[minp.first + 1]);
            e++;
            minp.first++;
        }
        // for (auto i : arr)
        // {
        //     cout << i << " ";
        // }
        // cout << endl;
    }
    pair<int, int> mxp = findMax(arr);
    while (mxp.first > 0)
    {
        swap(arr[mxp.first], arr[mxp.first - 1]);
        s++;
        mxp.first--;
        // for (auto i : arr)
        // {
        //     cout << i << " ";
        // }
        // cout << endl;
    }

    cout << s + e;

    return 0;
}