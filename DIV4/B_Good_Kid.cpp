#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <unordered_map>
using namespace std;
int main()

{
    int t;
    cin >> t;
    while (t--)
    {
        int size;
        cin >> size;

        vector<int> arr;
        for (int i = 0; i < size; i++)
        {
            int temp;
            cin >> temp;
            arr.push_back(temp);
        }
        if (size == 0)
            cout << 0 << endl;
        else if (size == 1)
        {
            cout << arr[0] + 1 << endl;
        }
        else
        {
            bool change = false;
            int mini = INT_MAX;
            int minindex = -1;
            long long mult = 1;
            for (int i = 0; i < size - 1; i++)
            {
                if (arr[i] != arr[i + 1])
                {
                    change = true;
                }
                if (mini > arr[i])
                {
                    mini = arr[i];
                    minindex = i;
                }
                mult *= arr[i];
            }
            mult *= arr[size - 1];
            if (arr[minindex] > arr[size - 1])
                minindex = size - 1;
            if (change == false)
            {
                if (arr[0] != 0)
                {
                    mult = mult / arr[0]; // Division operation
                    arr[0]++;
                    mult = mult * (arr[0]);
                    cout << mult << "\n";
                }
                else
                {
                    // Handle the case where arr[0] is already zero
                    cout << mult << "\n";
                }
            }
            else
            {
                mult = 1;
                // cout << arr[minindex] << endl;
                arr[minindex]++;
                // cout << arr[minindex] << endl;

                for (int i = 0; i < size; i++)
                {
                    mult *= arr[i];
                }
                cout << mult << "\n";
            }
        }
    }
    return 0;
}