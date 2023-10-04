#include <cctype>
#include <iostream>
#include <cstring>
using namespace std;

int main()
{

    string s;
    cin >> s;
    char s2 = toupper(s[0]);
    s[0] = s2;
    cout << s;
    return 0;
}