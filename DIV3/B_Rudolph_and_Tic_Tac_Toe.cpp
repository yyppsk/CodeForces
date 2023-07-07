#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int j = 0;
    while (t--)
    {
        std::vector<std::vector<char>> arr(3, std::vector<char>(3));

        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                std::cin >> arr[i][j];
            }
        }

        if (arr[0][0] != '.' && arr[0][0] == arr[0][1] && arr[0][1] == arr[0][2])
        {
            if (arr[0][0] == 'X')
                std::cout << "X" << std::endl;
            else if (arr[0][0] == 'O')
                std::cout << "O" << std::endl;
            else if (arr[0][0] == '+')
                std::cout << "+" << std::endl;
        }
        else if (arr[1][0] != '.' && arr[1][0] == arr[1][1] && arr[1][1] == arr[1][2])
        {
            if (arr[1][0] == 'X')
                std::cout << "X" << std::endl;
            else if (arr[1][0] == 'O')
                std::cout << "O" << std::endl;
            else if (arr[1][0] == '+')
                std::cout << "+" << std::endl;
        }
        else if (arr[2][0] != '.' && arr[2][0] == arr[2][1] && arr[2][1] == arr[2][2])
        {
            if (arr[2][0] == 'X')
                std::cout << "X" << std::endl;
            else if (arr[2][0] == 'O')
                std::cout << "O" << std::endl;
            else if (arr[2][0] == '+')
                std::cout << "+" << std::endl;
        }
        else if (arr[0][0] != '.' && arr[0][0] == arr[1][0] && arr[1][0] == arr[2][0])
        {
            if (arr[0][0] == 'X')
                std::cout << "X" << std::endl;
            else if (arr[0][0] == 'O')
                std::cout << "O" << std::endl;
            else if (arr[0][0] == '+')
                std::cout << "+" << std::endl;
        }
        else if (arr[0][1] != '.' && arr[0][1] == arr[1][1] && arr[1][1] == arr[2][1])
        {
            if (arr[0][1] == 'X')
                std::cout << "X" << std::endl;
            else if (arr[0][1] == 'O')
                std::cout << "O" << std::endl;
            else if (arr[0][1] == '+')
                std::cout << "+" << std::endl;
        }
        else if (arr[0][2] != '.' && arr[0][2] == arr[1][2] && arr[1][2] == arr[2][2])
        {
            if (arr[0][2] == 'X')
                std::cout << "X" << std::endl;
            else if (arr[0][2] == 'O')
                std::cout << "O" << std::endl;
            else if (arr[0][2] == '+')
                std::cout << "+" << std::endl;
        }
        else if (arr[0][0] != '.' && arr[0][0] == arr[1][1] && arr[1][1] == arr[2][2])
        {
            if (arr[0][0] == 'X')
                std::cout << "X" << std::endl;
            else if (arr[0][0] == 'O')
                std::cout << "O" << std::endl;
            else if (arr[0][0] == '+')
                std::cout << "+" << std::endl;
        }
        else if (arr[0][2] != '.' && arr[0][2] == arr[1][1] && arr[1][1] == arr[2][0])
        {
            if (arr[0][2] == 'X')
                std::cout << "X" << std::endl;
            else if (arr[0][2] == 'O')
                std::cout << "O" << std::endl;
            else if (arr[0][2] == '+')
                std::cout << "+" << std::endl;
        }
        else
        {
            cout << "DRAW" << endl;
        }
    }

    return 0;
}
