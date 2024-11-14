#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int n, m;
    cin >> n >> m;
 
    vector<int> a(n), b(m);
    vector<int> ans;
 
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        ans.push_back(a[i]);
    }
 
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
        ans.push_back(b[i]);
    }
    sort(ans.begin(), ans.end());
 
    for(int val : ans)  cout << val << " ";
 
    return 0;
}