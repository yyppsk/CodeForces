#include<iostream>
using namespace std;
int main()
{   
    int x = 0,n;
    string exp;
    cin>>n;
    for(int i = 0; i < n; i++){
        cin>>exp;
        if(exp == "++X" || exp == "X++"){
            x++;
        }
        else if(exp == "--X" || exp == "X--"){
            x--;
    }
    }
    cout<<x;

    return 0;
}