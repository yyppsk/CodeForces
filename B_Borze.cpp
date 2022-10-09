#include <iostream>
using namespace std;
void decoder(string str, int len)
{
    // cout << str;
    //  Digit 0 is transmitted as «.», 1 as «-.» and 2 as «--».
    //.-.--  ->
    for (int i = 0; i < len - 1; i++)
    {
        if (str[i] == '.' && str[i + 1] == '-')
        {
            cout << 0;
            i = i + 2;
        }
        else if (str[i] == '-' && str[i + 1] == '.')
        {
            cout << 1;
            i++;
        }
        else if (str[i] == '-' && str[i + 1] == '-')
        {
            cout << 2;
            i++;
        }
    }
}

int main()
{
    // Declaring a string object
    std::string name;
    std::cin >> name;
    int len = name.size();
    decoder(name, len);
    return 0;
}