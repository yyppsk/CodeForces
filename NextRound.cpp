#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;
int main()
{
    vector <int> nums;
    int range,high,input;
    int c=0;
    cin>>range>>high;
    const int highuse = high;
    int i = 0;
    for(i; i < range; i++){
        cin>>input;
        nums.push_back(input);
    }
    for (int j = 0; j < range; j++) {
        if (nums[j] >= nums[highuse-1] && nums[j] > 0) {
            c++;
        }
    }
    cout << c;
    
    return 0; 
}