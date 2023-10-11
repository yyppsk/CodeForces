#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
bool isMagic(string number)
{
    for (int i = 0; i < number.size(); i++)
    {
        // No number should be other than 1 and 4
        if (number[i] != '1' && number[i] != '4')
            return false;
    }

    // should not begin with 4
    if (number[0] == '4')
        return false;

    // should not contain an consecutive 3 times 4
    if (number.find("444") != number.npos)
    {
        return false;
    }

    return true;
}
int main()
{
    string number;
    cin >> number;

    isMagic(number) ? cout << "YES" : cout << "NO";

    return 0;
}