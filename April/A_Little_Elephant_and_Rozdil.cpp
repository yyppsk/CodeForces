#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#define ninp \
    int n;   \
    cin >> n;
#define nv                      \
    vector<int> arr;            \
    for (int i = 0; i < n; i++) \
    {                           \
        int t;                  \
        cin >> t;               \
        arr.push_back(t);       \
    };
using namespace std;
void solve(vector<int> arr, int n)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int least = INT_MAX;
    int repeat = 0, index = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < least)
        {
            index = i + 1;
            least = arr[i];
        }
    }
    for (auto i : arr)
    {
        if (least == i)
        {

            ++repeat;
        }
    }
    if (repeat <= 1)
        printf("%d", index);
    else if (repeat >= 2)
    {
        printf("Still Rozdil");
    }
}
int main()
{
    ninp;
    nv;
    solve(arr, n);
    return 0;
}