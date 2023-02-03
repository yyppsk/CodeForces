#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        char ch;
        cin >> ch;
        if (ch == 'c')
            printf("YES\n");
        else if (ch == 'o')
            printf("YES\n");
        else if (ch == 'd')
            printf("YES\n");
        else if (ch == 'e')
            printf("YES\n");
        else if (ch == 'f')
            printf("YES\n");
        else if (ch == 'r')
            printf("YES\n");
        else if (ch == 's')
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}