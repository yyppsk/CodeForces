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
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        vector<int> l;
        for (int i = 0; i < k; i++)
        {
            int temp;
            cin >> temp;
            l.push_back(temp);
        }
        vector<int> r;
        for (int i = 0; i < k; i++)
        {
            int temp;
            cin >> temp;
            r.push_back(temp);
        }
        int q;
        cin >> q;
        vector<int> quer;
        for (int i = 0; i < q; i++)
        {
            int temp;
            cin >> temp;
            quer.push_back(temp);
        }

        for (int i = 0; i < q; i++)
        {

            int x = quer[i];
            int a = min(x, r[i] + l[i] - x);
            int b = max(x, r[i] + l[i] - x);
            reverse(s.begin() + a, s.begin() + b);
        }
        cout << s << "\n";
    }

    return 0;
}