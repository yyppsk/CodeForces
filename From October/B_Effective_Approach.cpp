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
    int n;
    scanf("%d", &n);
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        int temp;
        scanf("%d", &temp);
        arr.push_back(temp);
    }
    vector<int> search;
    int q;
    scanf("%d", &q);
    for (int i = 0; i < q; i++)
    {
        int temp;
        scanf("%d", &temp);
        search.push_back(temp);
    }
    return 0;
}