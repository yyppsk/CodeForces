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
    /*
    Input
    The first input line contains the single integer n(1 ≤ n ≤ 1000) — the number of pages in the book.
        The second line contains seven non -
        negative space - separated integers that do not exceed 1000 —
        those integers represent how many pages Petr can read on Monday,
        Tuesday, Wednesday, Thursday, Friday, Saturday and Sunday correspondingly
        It is guaranteed that at least one of those numbers is larger than zero.
        return 0;
        /
        */
    int pages;
    scanf("%d", &pages);
    vector<int> days;
    for (int i = 0; i < 7; i++)
    {
        int temp;
        scanf("%d", &temp);
        days.push_back(temp);
    }
    int i = 0;
    string arr[] = {"Mon", "Tue", "wed", "Thur", "Frid", "Sat", "Sun"};
    while (pages > 0)
    {
        int res = pages - (days[i % 7]);
        pages = pages - (days[i % 7]);
        // cout << res << " " << arr[i % 7] << endl;
        i += 1;
    }
    // cout << "Ans" << i << endl;
    if (i % 7 == 0)
        cout << "7";
    else
        cout << i % 7;
}