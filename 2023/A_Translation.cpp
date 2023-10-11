#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
bool checkReverse(string berlandish, string birlandish)
{

    for (int i = 0; i < berlandish.size(); i++)
    {
        if (berlandish[i] != birlandish[birlandish.size() - 1 - i])
            return false;
    }
    return true;
}
int main()
{
    string berlandish, birlandish;

    cin >> berlandish >> birlandish;

    checkReverse(berlandish, birlandish) ? cout << "YES" : cout << "NO";

    return 0;
}