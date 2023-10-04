#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
vector<int> sieveOfEratosthenes(int limit)
{
    vector<bool> isPrime(limit + 1, true);
    isPrime[0] = isPrime[1] = false;

    for (int p = 2; p * p <= limit; ++p)
    {
        if (isPrime[p])
        {
            for (int i = p * p; i <= limit; i += p)
            {
                isPrime[i] = false;
            }
        }
    }

    vector<int> primes;
    for (int i = 2; i <= limit; ++i)
    {
        if (isPrime[i])
        {
            primes.push_back(i);
        }
    }

    return primes;
}
int main()
{
    int n, m;
    cin >> n >> m;
    // Non sieve

    if (n == m)
    {
        cout << "NO";
        return 0;
    }

    if (n != 2 & m != 3)
    {
        if (m + 1 == n)
        {
            cout << "NO";
            return 0;
        }
    }
    if (n >= 47)
    {
        cout << "NO";
        return 0;
    }
    int limit = 50;
    vector<int> primeList = sieveOfEratosthenes(limit);

    for (int i = 0; i < primeList.size(); i++)
    {
        // cout << primeList[i] << " ";
        if (primeList[i] == n)
        {
            if (primeList[i + 1] != m && (i + 1 < primeList.size()))
            {
                cout << "NO";
                return 0;
            }
        }
    }
    cout << "YES";
    // for (int divisior = 2; divisior < m; divisior++)
    // {
    //     if (m % divisior == 0)
    //     {
    //         cout << "NO";
    //         return 0;
    //     }
    // }
    // cout << "YES";
    return 0;
}
