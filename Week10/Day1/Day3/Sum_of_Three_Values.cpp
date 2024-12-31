// problem link : https://cses.fi/problemset/task/1641
#include <bits/stdc++.h>
#define ll long long int
#define pi pair<int, int>
#define yes cout << "YES" << '\n'
#define no cout << "NO" << '\n'
#define nl '\n'
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

int main()
{
    FIO;

    int n, k;
    cin >> n >> k;
    vector<int> a(n);

    if(n < 3){
        cout << "IMPOSSIBLE" << nl;
        return 0;
    }

    map<int, int> mp;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        mp[a[i]]++;
    }

    bool flag = false;
    int ans1 = -1, ans2 = -1, ans3 = -1;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(j == i) continue;
            int tmp = a[i]+a[j];
            int sub = k-tmp;
            if(sub == a[i])
            {
                if(mp[a[i]] > 1){
                    ans1 = a[i], ans2 = a[j], ans3 = a[i];
                    flag = true;
                }
            }
            else if(sub == a[j])
            {
                if(mp[a[j]] > 1){
                    ans1 = a[i], ans2 = a[j], ans3 = a[j];
                    flag = true;
                } 
            }
            else
            {
                auto it = mp.find(sub);
                if(it != mp.end()){
                    ans1 = a[i], ans2 = a[j], ans3 = it->first;
                    flag = true;
                }
            }
            if(flag) break;
        }
    }

    if(ans1 == -1 && ans2 == -1 && ans3 == -1){
        cout << "IMPOSSIBLE" << nl;
    }
    else{
        for(int i = 0; i < n; i++)
        {
            if(a[i] == ans1){
                cout << i+1 << " ";
                ans1 = -1;
            }   
            else if(a[i] == ans2){
                cout << i+1 << " ";
                ans2 = -1;
            }
            else if(a[i] == ans3){
                cout << i+1 << " ";
                ans3 = -1;
            }
        }
    }
    return 0;
}