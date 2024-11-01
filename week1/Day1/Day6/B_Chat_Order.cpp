#include <bits/stdc++.h>
#define pi pair<string, int>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;cin >> n;
    stack<string> st;
    string s;

    for(int i = 0; i < n; i++)
    {
        cin >> s;
        st.push(s);
    }

    map<string, int> mp;
    while(!st.empty())
    {
        if(mp[st.top()] == 0)
        {
            cout << st.top() << '\n';
            mp[st.top()]++;
        }
        st.pop();
    }
    return 0;
}