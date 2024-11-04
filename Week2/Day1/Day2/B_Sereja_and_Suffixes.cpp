#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;
    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    vector<int> ans(n);
    set<int> st;
    for(int i = n - 1; i >= 0; i--)
    {
        st.insert(a[i]);
        ans[i] = st.size();
    }
    while (m--)
    {
        int x; cin >> x;
        cout << ans[x - 1] << '\n';
    }
    return 0;
}