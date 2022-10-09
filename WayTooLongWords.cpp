#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n,cnt=0;
    cin>>n;
    if (n > 100 || n < 1){
        return 1;
    }
    string input;
    for(int i = 0; i < n; i++)
    {
        cin>>input;
        if(input.length() <= 10 )
            cout<<input<<"\n";
        else
            cout<<input[0]<<input.length()-2<<input[input.length()-1]<<endl;
    }
    return 0;
}