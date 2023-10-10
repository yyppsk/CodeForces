#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    long long houses, tasks;

    cin >> houses >> tasks;

    long long CurrenthouseNumber = 1;
    long long time = 0;
    while (tasks--)
    {
        long long task;
        cin >> task;

        if (CurrenthouseNumber <= task)
        {

            time += task - CurrenthouseNumber;
            CurrenthouseNumber = task;
        }
        else
        {
            time += houses - CurrenthouseNumber + task;
            CurrenthouseNumber = task;
        }
    }
    cout << time;

    return 0;
}