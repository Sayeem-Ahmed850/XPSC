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
    int n; cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    bool flag = false;
    for(int i = 0; i < (1 << n); i++)
    {
        int sum = 0;
        for(int k = 0; k < n; k++)
        {    
            if((i >> k) & 1)
                sum += a[k];
            else
                sum -= a[k];
        }
        if(sum % 360 == 0){
            flag = true;
            break;
        }
    }
    if(flag) yes;
    else no;
    
    return 0;
}