// problem link : https://codeforces.com/edu/course/2/lesson/6/1/practice/contest/283911/problem/A
#include <bits/stdc++.h>
#define ll long long int
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
    vector<int> a(n), b(k);
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < k; i++) cin >> b[i];

    for(int i = 0; i < k; i++) 
    {
        bool flag = false;
        int l = 0, r = n-1;
        while(l <= r)
        {
            int mid = (l+r)/2;
            if(a[mid] == b[i])
            {
                flag = true;
                break;
            }   
            if(b[i] > a[mid]) l = mid+1;
            else r = mid-1;
        }
        if(flag) yes;
        else no;
    }
    return 0;
}