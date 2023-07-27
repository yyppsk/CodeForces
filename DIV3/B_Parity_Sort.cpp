#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
bool canSortInNonDecreasing(std::vector<int> &arr)
{
    int n = arr.size();
    int oddCount = 0, evenCount = 0;

    for (int num : arr)
    {
        if (num % 2 == 0)
        {
            evenCount++;
        }
        else
        {
            oddCount++;
        }
    }

    // If the number of odd elements and even elements is either 0 or both non-zero,
    // it is possible to sort the array in non-decreasing order using the given operation.
    return (oddCount == 0 && evenCount > 0) || (oddCount > 0 && evenCount == 0);
}

int main()
{
    int testCases;
    cin >> testCases;
    while (testCases--)
    {
        int n;
        cin >> n;
        vector<int> arr;
        for (int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;
            arr.push_back(temp);
        }
        bool possibleToSort = canSortInNonDecreasing(arr);

        if (possibleToSort)
        {
            std::cout << "YES" << std::endl;
        }
        else
        {
            std::cout << "NO" << std::endl;
        }
    }

    return 0;
}