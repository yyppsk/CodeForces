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
    long long num;
    cin >> num;
    int lucky = 0, count = 0;
    while (num > 1)
    {
        int last = num % 10;
        if (last == 7 || last == 4)
            lucky++;
        num /= 10;
        count++;
    }
    if (lucky == 7 || lucky == 4)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}