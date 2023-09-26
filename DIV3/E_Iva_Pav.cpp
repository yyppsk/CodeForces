#include <iostream>
#include <vector>

using namespace std;

// Function to check if f(L, r) >= k
bool canAchieveK(vector<int> &a, int L, int r, int k)
{
    int result = 0;
    for (int i = L; i <= r; ++i)
    {
        result &= a[i];
        if (result >= k)
        {
            return true;
        }
    }
    return false;
}

// Binary search to find the largest r such that f(L, r) >= k
int binarySearch(vector<int> &a, int L, int k)
{
    int low = L;
    int high = a.size() - 1;
    int ans = -1;

    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (canAchieveK(a, L, mid, k))
        {
            ans = mid;
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    return ans;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);

        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }

        int q;
        cin >> q;

        for (int i = 0; i < q; ++i)
        {
            int k, l;
            cin >> k >> l;

            int result = binarySearch(a, l - 1, k);

            if (result == -1)
            {
                cout << "-1 ";
            }
            else
            {
                cout << result + 1 << " ";
            }
        }

        cout << endl;
    }

    return 0;
}
