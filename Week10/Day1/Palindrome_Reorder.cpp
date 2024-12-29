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
    string s; cin >> s;
    map<char, int> mp;
    for(char c : s) mp[c]++;

    int odd = 0;
    for(auto[x, y]:mp)
    {
        if(y % 2 != 0) odd++;
    } 

    if(odd > 1) cout << "NO SOLUTION";
    else{
        char odd_char;
        int odd_cnt = 0;
        string ans;
        for(auto[x,y]:mp)
        {
            if(y % 2 == 0){
                for(int i = 0; i < y/2; i++) ans.push_back(x); 
            }
            else{
                odd_char = x;
                odd_cnt  = y;
            }
        }
        string tmp = ans;
        for(int i = 0; i < odd_cnt; i++) ans.push_back(odd_char);
        reverse(tmp.begin(), tmp.end());
        ans+=tmp;
        cout << ans << nl;
    }
    return 0;
}