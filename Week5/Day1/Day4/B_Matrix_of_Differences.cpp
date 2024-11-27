#include <bits/stdc++.h>
#define ll long long int
#define pi pair<int, int>
#define yes cout << "YES" << '\n'
#define no cout << "NO" << '\n'
#define nl '\n'
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

void solve()
{
    int n; cin >> n;
    priority_queue<int> pq1;
    priority_queue<int, vector<int>, greater<int>> pq2;

    for(int i = 1; i <= (n * n); i++) 
    {
        pq1.push(i);
        pq2.push(i);
    }

    for(int i = 0; i < n; i++)
    {
        vector<int> ans(n);
        if(i % 2 == 0)
        {
            for(int j = 0; j < n; j++)
            {
                if(j % 2 == 0){
                    ans[j] = pq1.top();
                    pq1.pop();
                }
                else{
                    ans[j] = pq2.top();
                    pq2.pop();
                }
            }
            for(auto val : ans) cout << val << " ";
            cout << nl;
        }
        else
        {
            vector<int> ans(n);
            for(int j = n - 1; j >= 0; j--)
            {
                if(j % 2 == 0)
                {
                    ans[j] = pq2.top();
                    pq2.pop();
                }
                else
                {
                    ans[j] = pq1.top();
                    pq1.pop();
                }
            }
            for(auto val : ans) cout << val << " ";
            cout << nl;
        }
    }
}

int main()
{
    FIO;

    int t; cin >> t;
    while(t--)
        solve();
    return 0;
}