#include <iostream>
#include <vector>
#include <cctype>
#include <algorithm>
#include <string>
using namespace std;

void solve(string s)
{
    // uppercase larger
    int isuppercount = 0;
    // lowercase larger
    int islowercount = 0;

    for (int i = 0; i <= s.length() - 1; i++)
    {
        if (isupper(s[i]))
            isuppercount += 1;
        else
            islowercount += 1;
    }

    if (isuppercount > islowercount)
    {
        for (int i = 0; i <= s.length() - 1; i++)
        {
            if ((islower(s[i])))
                s[i] = toupper(s[i]);
        }
    }
    else if (isuppercount < islowercount)
    {
        for (int i = 0; i <= s.length() - 1; i++)
        {
            if ((isupper(s[i])))
                s[i] = tolower(s[i]);
        }
    }
    else
    {
        for (int i = 0; i <= s.length() - 1; i++)
        {
            s[i] = tolower(s[i]);
        }
    }
    cout << s;
}
/*
void solve(string s)
{
    // uppercase larger
    int isuppercount = 0;
    // lowercase larger
    int islowercount = 0;
    int front = 0;
    int back = s.size() - 1;
    if (s.length() == 1)
    {
        if (isupper(s[0]))
            isuppercount += 1;
        else
            islowercount += 1;
    }
    else
    {
        while (front < back--)
        {
            if (isupper(s[front]))
                isuppercount += 1;
            else if ((islower(s[front])))
                islowercount += 1;
            printf("For front : %c UC : %d\n", s[front], isuppercount);
            printf("For front : %c lC : %d\n", s[front], islowercount);

            if (isupper(s[back]))
                isuppercount += 1;
            else if ((islower(s[back])))
                islowercount += 1;
            printf("For back : %c UC : %d\n", s[back], isuppercount);
            printf("For back : %c lC : %d\n", s[back], islowercount);
            front++;
                }
    }
    cout << isuppercount << "," << islowercount << endl;
    front = 0;
    back = s.size() - 1;
    if (isuppercount > islowercount)
    {
        cout << "UP" << endl;
        while (front <= back)
        {
            printf("%c converts to ", s[front]);
            if ((islower(s[front])))
                s[front] = toupper(s[front]);
            printf("%c\n", s[front]);
            printf("%c converts to ", s[back]);
            if ((islower(s[back])))
                s[back] = toupper(s[back]);
            printf("%c\n", s[back]);
            front++;
            back--;
        }
    }
    else if (isuppercount < islowercount)
    {
        cout << "Low" << endl;
        while (front <= back)
        {
            if ((isupper(s[front])))
                s[front] = tolower(s[front]);
            if ((isupper(s[back])))
                s[back] = tolower(s[back]);
            front++;
            back--;
        }
    }
    else
    {
        while (front <= back)
        {
            s[front] = tolower(s[front]);
            s[back] = tolower(s[back]);
            front++;
            back--;
        }
    }

    // uppercase == lowercase
    cout << s;
}
*/
int main()
{
    string s = "Ab";
    cin >> s;
    solve(s);
    return 0;
}