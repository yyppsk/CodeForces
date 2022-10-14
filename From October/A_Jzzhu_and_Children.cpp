#include <iostream>
#include <vector>
#include <algorithm>
#include <deque>
#include <string>
using namespace std;
int main()
{
    deque<pair<int, int>> qu;
    int size, candies;
    cin >> size >> candies;
    for (int i = 1; i <= size; i++)
    {
        int temp;
        pair<int, int> p;
        p.first = i;
        scanf("%d", &temp);
        p.second = temp;
        qu.push_back(p);
    }
    /*
    for (auto i : qu)
    {
        cout << i.first << ":" << i.second << endl;
    }
    cout << endl;
    */
    while (!qu.empty())
    {
        for (auto i : qu)
        {
            if (i.second - candies <= 0)
                qu.pop_front();
            else
            {
                qu.push_back({i.first, i.second - candies});
                qu.pop_front();
            }
            for (auto i : qu)
            {
                // cout << i.first << ":" << i.second << endl;
            }
            //cout << endl;
        }
    }
    cout << qu.back().first << endl;
    return 0;
}