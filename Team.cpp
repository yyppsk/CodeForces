#include<iostream>
using namespace std;
int main()
{
    int a,b,c,n,sum=0;
    cin>>n;
    if (n > 1000 || n < 1){
        return 1;
    }
    for(int i = 0; i < n; i++){
        cin>>a>>b>>c;
        if(a+b+c>=2){
            sum++;
        }
    }
    cout<<sum;
    
}