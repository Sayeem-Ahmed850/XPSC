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
    for(int i = 0; i < n; i++){
        cin >> a[i];
        a[i] += k;
    }
 
    vector<int> team;
    for(int i = 0; i < n; i++)
    {
        if(a[i] <= 5) team.push_back(a[i]);
    }
 
    cout << team.size() / 3;
 
    return 0;
}
