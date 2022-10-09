#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int children, time;
    vector<char> queue;
    scanf("%d %d", &children, &time);
    for (int i = 0; i <= children; i++)
    {
        char temp;
        scanf("%c", &temp);
        queue.push_back(temp);
    }
    for (auto i : queue)
    {
        printf("%c", i);
    }
    return 0;
}