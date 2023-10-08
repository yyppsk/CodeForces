#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

// Method 1
int linearSearch(int query, vector<int> &numbers)
{
    int comparisons = 0;
    for (int i = 1; i < numbers.size(); i++)
    {
        if (numbers[i] == query)
        {
            comparisons++;
            return comparisons;
        }
        else
        {
            comparisons++;
        }
    }
    return comparisons;
}
int linearSearchReverse(int query, vector<int> &numbers)
{
    int comparisons = 0;
    for (int i = numbers.size() - 1; i >= 1; i--)
    {
        if (numbers[i] == query)
        {
            comparisons++;
            return comparisons;
        }
        else
        {
            comparisons++;
        }
    }
    return comparisons;
}
// TWPTRS NOT COMPLETED YET
void linearSearchTwoPtrs(int query, vector<int> &numbers, int &forward, int &backward)
{
    int size = numbers.size() - 1;
    int left = 1, right = size;
    bool leftfound = false, rightfound = false;
    while (left < right)
    {
        if (numbers[right] == query)
        {
            backward++;
            rightfound = true;
        }
        else
        {
            right--;
        }

        if (rightfound)
        {
            forward += 1 - left + 1;
        }
        if (numbers[left] == query)
        {
            forward++;
            leftfound = true;
        }
        else
        {
            left++;
        }
        if (leftfound)
        {
            backward += size - left + 1;
        }
    }
}

int main()
{
    const int N = int(1e5 + 3);
    int n;
    cin >> n;
    int positions[N];
    // vector<int> numbers(n + 1, 0);
    // for (int i = 1; i <= n; i++)
    //     cin >> numbers[i];

    // int q;
    // cin >> q;
    // vector<int> queries;
    // for (int i = 0; i < q; i++)
    // {
    //     int t;
    //     cin >> t;
    //     queries.push_back(t);
    // }

    long long forwardLS = 0,
              backwardLS = 0;

    // for (const auto &query : queries)
    // {
    //     forwardLS += linearSearch(query, numbers);
    // }

    // for (const auto &query : queries)
    // {
    //     backwardLS += linearSearchReverse(query, numbers);
    // }

    // two pointers approach
    // for (const auto &query : queries)
    // {
    //     linearSearchTwoPtrs(query, numbers, forwardLS, backwardLS);
    // }
    for (int i = 0; i < n; i++)
    {
        int number;
        cin >> number;
        positions[number] = i + 1;
    }

    int queries;
    cin >> queries;
    for (int i = 0; i < queries; i++)
    {
        int query;
        cin >> query;
        forwardLS += positions[query];
        backwardLS += n - positions[query] + 1;
    }
    cout << forwardLS << " " << backwardLS;
    return 0;
}