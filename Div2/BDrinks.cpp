#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <iomanip>
using namespace std;
double avgStuff(double n, double sum)
{
}
int main()
{
    double n;
    cin >> n;
    double sum;
    double take;
    for (int i = 0; i < n; i++)
    {
        scanf("%lf", &take);
        sum += take;
    }
    printf("%.12lf", (sum / n));
}