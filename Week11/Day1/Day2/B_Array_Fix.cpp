// problem link : https://codeforces.com/problemset/problem/1948/B
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
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    
    vector<int> ans;
    for(int i = 0; i < n; i++)
    {
        bool flag = true;
        for(int j = i+1; j < n; j++)
        {
            if(a[i] > a[j]) 
            {   
                flag = false;
                break;
            }
        }
        if(flag) ans.push_back(a[i]);
        else
        {
            ans.clear();
            for(int j = 0; j <= i; j++)
            {
                int x = a[j]/10, y = a[j]%10;   
                if(x != 0) ans.push_back(x);
                ans.push_back(y);
            }
        }
    }

    bool flag = true;
    for(int i = 0; i < ans.size()-1; i++)
    {
        if(ans[i] > ans[i+1])
        {
            flag = false;
            break;
        }
    }
    if(flag) yes;
    else no;

}

int main()
{
    FIO;
    int t; cin >> t;
    while(t--) solve();
    return 0;
}