class Solution {
  public:
    int lenOfLongestSubarr(vector<int> &a, int k) 
    {
        int n = a.size();

        vector<long long int> pre(n);
        pre[0] = a[0];

        for (int i = 1; i < n; i++)
        {
            pre[i] = pre[i - 1] + a[i];
        }

        int ans = 0;
        map<long long int, int> mp;
        for (int i = 0; i < n; i++)
        {
            if (pre[i] == k)
            {
                ans = max(ans, i + 1);
            }

            if (mp.find(pre[i] - k) != mp.end())
            {
                ans = max(ans, i - mp[pre[i] - k]);
            }
            if (mp.find(pre[i]) == mp.end())
            {
                mp[pre[i]] = i;
            }
        }
        return ans;
    }
};
