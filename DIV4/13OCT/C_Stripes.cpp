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
    int n = n;
    while (n--)
    {
        int row = 8, col = 8;
        char ans;
        for (int i = 0; i < row; i++)
        {
            int k = 0;
            for (int j = 0; i < col; i++)
            {
                char temp;
                scanf("%c", &temp);
                ++k;
                if (k == row)
                {
                    if (temp == 'B')
                        ans = 'B';
                    if (temp == 'R')
                        ans = 'R';
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}