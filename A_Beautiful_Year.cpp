#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int solve(int year)
{
    while (year)
    {
        int helper = (year / 100) % 10;
        int ones = year % 10, tens = (year / 10) % 10, thousand = year / 1000;
        // printf("Thousand : %d Hundreds : %d Tens : %d Ones: %d\n", thousand, helper, tens, ones);
        if ((ones != tens) && (ones != helper) && (ones != thousand) && (tens != helper) && (tens != thousand) && (helper != thousand))
            return year;
        year++;
    }
    return -1;
}
// 1989
// a ! b t, B ! C T, C !D F

int main()
{
    int year;
    scanf("%d", &year);
    printf("%d", solve(year + 1));
    return 0;
}