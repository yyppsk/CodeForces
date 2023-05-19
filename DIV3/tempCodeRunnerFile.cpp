set<string> st;
    int start = 0;
    while (start < desiredMelody.size())
    {
        string build = "";
        if (build.size() < 3)
        {
            build.push_back(desiredMelody[start]);
            if (build.size() == 3)
            {
                string a, b;
                a = string(1, build[0]) + build[1];
                b = string(1, build[1] + build[2]);
                st.insert(a);
                st.insert(b);
            }
        }
        start++;
    }
    for (string x : st)
    {
        cout << x << " ";
    }