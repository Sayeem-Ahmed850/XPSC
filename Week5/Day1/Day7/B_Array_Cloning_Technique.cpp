#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

void solve()
{
    int n; cin >> n;
    vector<int> a(n);
    map<int, int> mp;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        mp[a[i]]++;
    }

    int val = 0, cnt = 0;
    for(auto [x, y] : mp){
        if(y > cnt){
            cnt = y;
            val = x;
        }
    }
    if(cnt == n){
        cout << 0 << nl;
        return;
    }

    int equal = cnt, ope = 1, c = cnt;

    for(int i = 0; i < n; i++)
    {
        if(a[i] != val){
            a[i] = val;

            equal++, ope++, c--;
           
            if(equal == n){
                break;
            }
            if(c == 0){
                ope++;
                cnt *= 2;   
                c = cnt;
            }
        }
    }
    cout << ope << nl;
}

int main()
{
    FIO;

    int t; cin >> t;
    while(t--)
        solve();
    return 0;
}