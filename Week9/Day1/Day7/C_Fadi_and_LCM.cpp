// problem link : https://codeforces.com/problemset/problem/1285/C
#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
 

bool isPrime(ll n)
{
    for(ll i = 2; i*i <= n; i++)
    {
        if(n % i == 0) return false;
    }
    return true;
}
 
int main()
{
    FIO;        
    ll x; cin >> x; 

    // prime number checked;   
    if(isPrime(x)){
        cout << 1 << " " << x << nl;
    }
    else{
        // divisor count;
        vector<ll> div;
        for(ll i = 1; i*i <= x; i++)
        {
            if(x % i == 0)
            {
                div.push_back(i);
                if(i != x/i) div.push_back(x/i);
            }
        }
        sort(div.begin(), div.end());   

        // finding the minimum value of max(a, b) whose LCM(a, b) is equal to x.
        // tow pointer technique;
        ll a = LLONG_MAX, b = LLONG_MAX, mx_ab = LLONG_MAX;
        int l = 0, r = div.size()-1;
        while(l < r)
        {
            ll lcm = (div[r]/__gcd(div[l], div[r]))*div[l];
            if(lcm == x)
            {
                if(mx_ab > max(div[l], div[r]))
                {
                    mx_ab = max(div[l], div[r]);
                    a = div[l]; b = div[r];
                }
            }
            l++, r--;
        }
        cout << a << " " << b << nl;
    }
    return 0;
}   