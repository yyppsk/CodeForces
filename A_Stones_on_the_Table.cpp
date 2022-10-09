#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
int solve(string s, int size)
{
    int start = 1;
    int tail = 0;
    int ans = 0;
    while (start < size && tail < start)
    {
        //printf("%c == %c\n", s[start], s[tail]);
        if (s[start] == s[tail])
            ans += 1;
        start += 1;
        tail += 1;
    }
    return ans;
}
int main()
{
    string s;
    int ch;
    scanf("%d", &ch);
    cin >> s;
    cout << solve(s, ch);
    return 0;
}