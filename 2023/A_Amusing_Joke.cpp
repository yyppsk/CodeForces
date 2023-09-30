#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    string hostname, guestname, messy;
    cin >> hostname;
    cin >> guestname;
    cin >> messy;

    int frequency[26] = {0};
    for (int i = 0; i < messy.size(); i++)
    {
        frequency[messy[i] - 65]++;
    }
    // REDUCTION FROM STRING1
    for (int i = 0; i < hostname.size(); i++)
    {
        frequency[hostname[i] - 65]--;
    }
    // REDUCTION FROM STRING1
    for (int i = 0; i < guestname.size(); i++)
    {
        frequency[guestname[i] - 65]--;
    }
    bool changed = false;
    for (int i = 0; i < 26; i++)
    {
        if (frequency[i] > 0 || frequency[i] < 0)
            changed = true;
    }
    if (changed == true)
        cout << "NO\n";
    else
        cout << "YES\n";
    // for (int i = 0; i < 26; i++)
    // {
    //     cout << frequency[i] << " ";
    // }
    return 0;
}