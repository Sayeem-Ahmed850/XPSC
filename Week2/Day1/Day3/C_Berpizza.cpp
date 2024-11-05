#include <bits/stdc++.h>
#define pi pair<int, int>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    set<pi> st;
    multiset<pi> ml;
    vector<int> ans;
    int cn = 1;
    while (t--)
    {
        int a; cin >> a;
        if (a == 1)
        {
            int b; cin >> b;
            st.insert({cn, b});
            ml.insert({b, -cn});
            cn++;
        }
        else if (a == 2)
        {
            int pos = st.begin()->first, cost = st.begin()->second;
            ans.push_back(pos);
            st.erase(st.begin());
            ml.erase({cost, -pos});
        }
        else
        {
            int pos = -ml.rbegin()->second, cost = ml.rbegin()->first;
            ans.push_back(pos);
            ml.erase(--ml.end());
            st.erase({pos, cost});
        }
    }

    for (int val : ans)
        cout << val << " ";
    return 0;
}