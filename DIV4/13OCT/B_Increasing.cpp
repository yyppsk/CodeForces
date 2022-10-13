#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
void solve()
{
}
int main()
{
    int t;
    cin >> t;

    // The first line contains a single integer t(1≤t≤100) — the number of test cases.
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr;
        for (int i = 0; i < n; i++)
        {
            int temp;
            scanf("%d", &temp);
            arr.push_back(temp);
        }
        sort(arr.begin(), arr.end());
        int start = 0;
        int end = arr.size() - 1;
        bool found = false;
        if (arr[0] == arr[arr.size() - 1] && arr.size() != 1)
            printf("NO\n");
        else
        {
            while (start < end)
            { // 1 2 3 4 5
                if ((arr[start] >= arr[end]) && (found == false))
                {
                    printf("NO\n");
                    found = true;
                }
                start += 1;
                end -= 1;
            }
            if (found == false)
            {
                printf("YES\n");
            }
        }
    }
    // The first line of each test case contains a single integer n(1≤n≤100) — the length of the array.

    // The second line of each test case contains n integers ai(1≤ai≤109) — the elements of the array.return 0;
}