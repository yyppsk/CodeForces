#include <iostream>
#include <string>
#include <set>
using namespace std;

int minimumRecordedMelodies(string desiredMelody)
{
    set<string> st;
    int start = 0;
    string build = "";
    while (start < desiredMelody.size())
    {
        if (build.size() < 2)
        {
            build.push_back(desiredMelody[start]);
            if (build.size() == 2)
            {
                st.insert(build);
                build = "";
                start--;
            }
        }
        start++;
    }
    return st.size();
}

int main()
{
    int testCases;
    cin >> testCases;

    while (testCases--)
    {
        int length;
        string desiredMelody;
        cin >> length >> desiredMelody;

        int minRecordedMelodies = minimumRecordedMelodies(desiredMelody);
        cout << minRecordedMelodies << endl;
    }

    return 0;
}
