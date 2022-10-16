#include <iostream>
#include <numeric>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
void solve()
{
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int lenofarray;
        int noque;
        cin >> lenofarray >> noque;
        vector<long long> vec;
        long long oddsum = 0;
        long long evensum = 0;
        int counteven = 0, countodd = 0;
        for (int i = 0; i < lenofarray; i++)
        {
            int temp;
            cin >> temp;
            bool isEven = (temp & 1) == 0;
            if (isEven)
            {
                evensum += temp;
                counteven += 1;
            }
            else
            {
                oddsum += temp;
                countodd += 1;
            }
            vec.push_back(temp);
        }
        //cout << "Count Even " << counteven << " Sum Even " << evensum << endl;
        //cout << "Count Odd " << countodd << " Sum Odd " << oddsum << endl;
        for (int i = 0; i < noque; i++)
        {
            long long sum = 0;
            int type, val;
            cin >> type >> val;
            if (type == 0)
            {
                /*
                for (int j = 0; j < vec.size(); j++)
                {
                    bool isEven = (vec[j] & 1) == 0;
                    if (isEven)
                    {
                        vec[j] += val;
                    }
                    sum += vec[j];
                }
                */
                sum = (counteven * val) + evensum + oddsum;
                cout << sum << endl;
            }
            else
            {
                /*
                for (int j = 0; j < vec.size(); j++)
                {

                    bool isEven = (vec[j] & 1) == 0;
                    if (!isEven)
                    {
                        vec[j] += val;
                    }
                    sum += vec[j];
                }
                */
                sum = (countodd * val) + evensum + oddsum;
                cout << sum << endl;
            }
        }
    }
    return 0;
}