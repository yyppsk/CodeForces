#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
    // brute force
    int largest = -1, smallest = 10000;
    int n;
    cin >> n;
    int number;
    int amazing = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> number;
        if (i == 0)
        {
            if (number > largest)
            {
                largest = number;
            }
            if (number < smallest)
            {
                smallest = number;
            }
        }
        else
        {
            if (number > largest)
            {
                amazing++;
                largest = number;
            }
            if (number < smallest)
            {
                amazing++;
                smallest = number;
            }
        }
    }
    cout << amazing;
    return 0;
}