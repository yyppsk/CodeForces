#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <unordered_map>
#include <set>
using namespace std;
int main()
{
    string s;
    cin >> s;
    // trying to get the counts of the frequencies
    set<int> st;
    for (const auto &itr : s)
    {
        st.insert(itr);
    }
    st.size() % 2 == 0 ? cout << "CHAT WITH HER!\n" : cout << "IGNORE HIM!\n";
    return 0;
}