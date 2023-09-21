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
        vector<vector<char>> box('0', vector<char>('0', 10));
        for (int i = 0; i < 10; i++)
        {
            for (int j = 0; j < 10; j++)
            {
                char ch;
                cin >> ch;
                box[i][j] = ch;
            }
        }
        int points = 0;
        // top for 1
        for (int i = 0; i < 10; i++)
        {
            if (box[0][i] == 'X')
                points += 1;
        }
        // bottom for 1
        for (int i = 0; i < 10; i++)
        {
            if (box[9][i] == 'X')
                points += 1;
        }
        // left for 1
        for (int i = 1; i < 9; i++)
        {
            if (box[1][i] == 'X')
                points += 1;
        }
        // right for 1
        for (int i = 1; i < 9; i++)
        {
            if (box[9][i] == 'X')
                points += 1;
        }

        // for 2 points

        // top for 1
        for (int i = 0; i < 10; i++)
        {
            if (box[0][i] == 'X')
                points += 1;
        }
        // bottom for 1
        for (int i = 0; i < 10; i++)
        {
            if (box[9][i] == 'X')
                points += 1;
        }
        // left for 1
        for (int i = 1; i < 9; i++)
        {
            if (box[1][i] == 'X')
                points += 1;
        }
        // right for 1
        for (int i = 1; i < 9; i++)
        {
            if (box[9][i] == 'X')
                points += 1;
        }
        std::cout << "Total points: " << points << std::endl;
    }
    return 0;
}