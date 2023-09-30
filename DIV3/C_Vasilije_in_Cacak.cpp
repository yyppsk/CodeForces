#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool combinationSumK(vector<long long> &candidates, int target, int k)
{
    int n = candidates.size();
    vector<vector<bool>> dp(target + 1, vector<bool>(k + 1, false));
    dp[0][0] = true;

    for (int i = 0; i < n; i++)
    {
        for (int j = target; j >= candidates[i]; j--)
        {
            for (int t = 1; t <= k; t++)
            {
                dp[j][t] = dp[j][t] || dp[j - candidates[i]][t - 1];
            }
        }
    }

    return dp[target][k];
}

void findCombination(int ind, int target, vector<int> &arr, vector<vector<int>> &ans, vector<int> &ds, int k)
{
    if (target == 0 && ds.size() == k)
    {
        ans.push_back(ds);
        return;
    }
    if (ds.size() >= k || ind == arr.size() || target < 0)
    {
        return;
    }

    for (int i = ind; i < arr.size(); i++)
    {
        if (i > ind && arr[i] == arr[i - 1])
            continue;
        ds.push_back(arr[i]);
        findCombination(i + 1, target - arr[i], arr, ans, ds, k);
        ds.pop_back();
    }
}

vector<vector<int>> combinationSumK(vector<int> &candidates, int target, int k)
{
    sort(candidates.begin(), candidates.end());
    vector<vector<int>> ans;
    vector<int> ds;
    findCombination(0, target, candidates, ans, ds, k);
    return ans;
}

bool isCombinationSumValid(long long n, long long k, long long x)
{
    // Calculate the minimum and maximum possible sums of a combination of size k.
    long long minSum = k * (k + 1) / 2;
    long long maxSum = k * (2 * n - k + 1) / 2;

    // Check if x is within the valid sum range.
    return (x >= minSum && x <= maxSum);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, k, x;
        cin >> n >> k >> x;

        if (isCombinationSumValid(n, k, x))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
