#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
void Reconnaissance(int amountofsoldiers, vector<int> &heights)
{
    int mindiff = 1001, last = 0;
    last = abs(heights[0] - heights[amountofsoldiers - 1]);
    mindiff = min(mindiff, last);
    int start = 1, end = amountofsoldiers;
    for (int i = 0; i < heights.size(); i++)
    {
        last = abs(heights[i + 1] - heights[i]);
        if (mindiff > last)
        {
            mindiff = last;
            start = i + 1;
            end = i + 2;
        }
    }
    cout << start << " " << end << endl;
}
int main()
{
    int amountofsoldiers;
    vector<int> heights(amountofsoldiers);
    cin >> amountofsoldiers;
    for (int i = 0; i < amountofsoldiers; i++)
    {
        int tmp;
        scanf("%d", &tmp);
        heights.push_back(tmp);
    }
    Reconnaissance(amountofsoldiers, heights);
    return 0;
}