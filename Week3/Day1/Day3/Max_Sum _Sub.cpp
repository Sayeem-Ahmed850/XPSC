class Solution
{
public:
    long long maximumSumSubarray(vector<int> &arr, int k)
    {
        long long int ans = 0, sum = 0;
        int l = 0, r = 0;

        while (r < arr.size())
        {
            sum += arr[r];
            if (abs(l - r) + 1 == k)
            {
                ans = max(ans, sum);
                sum -= arr[l];
                l++, r++;
            }
            else
                r++;
        }
        return ans;
    }
};