#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int count = 0;
    int s;
    cin >> s;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    priority_queue<int, vector<int>, greater<int>> min_heap;

    for (auto i : arr)
    {
        min_heap.push(i);
    }

    while (!min_heap.empty())
    {
        if (min_heap.top() <= s)
        {
            int a = min_heap.top();
            min_heap.pop();
            int b = min_heap.top();
            min_heap.pop();
            int x = a * a + b;
            count++;
            min_heap.push(x);
        }
        else
        {
            break;
        }
    }
    cout << count << endl;
    return 0;
}