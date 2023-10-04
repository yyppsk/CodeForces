#include <iostream>
using namespace std;
void decoder(string &str, int len)
{
    for (int i = 0; i < len; i++)
    {
        if (str[i] == '.')
            cout << 0;
        else if (str[i] == '-' && str[i + 1] == '.')
        {
            cout << 1;
            i++;
        }
        else
        {
            cout << 2;
            i++;
        }
    }
}

int main()
{
    string str;
    cin >> str;
    decoder(str, str.size());
    return 0;
}