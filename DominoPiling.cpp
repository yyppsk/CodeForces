#include<iostream>
using namespace std;
int main()
{   
    int M,N;
    cin>>M>>N;
    if (N <= 16)
    {
        cout<<M*N/2;
    }
    return 0;
}