#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
string solve(string &children, int time, int size)
{
    int c = 0;
    while (c != time)
    {
        int head = 0;
        int tail = 1;
        for (int i = 0; i < children.size(); i++)
        {
            if (head >= size || tail >= size)
                break;
            if (children[head] == 'B' && children[tail] == 'G')
            {
                swap(children[head], children[tail]);
                head += 2;
                tail += 2;
            }
            else
            {
                head++;
                tail++;
            }
        }
        c++;
    }
    return children;
}
int main()
{
    string children;
    int time, n;
    cin >> n >> time;
    cin >> children;
    cout << solve(children, time, n);
    return 0;
}