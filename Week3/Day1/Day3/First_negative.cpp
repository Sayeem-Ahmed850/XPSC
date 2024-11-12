class Solution {
  public:
    vector<int> FirstNegativeInteger(vector<int>& arr, int k) 
    {
        queue<int> q;
        vector<int> ans;
        
        int l = 0, r = 0;
        while(r < arr.size())
        {
            if(arr[r] < 0)
            {
                q.push(arr[r]);
            }
            
            if(r - l + 1 == k)
            {
                if(!q.empty())
                {
                    ans.push_back(q.front());
                    
                    if(arr[l] == q.front())
                    {
                        q.pop();
                    }
                }
                else
                {
                     ans.push_back(0);
                }
                l++;
            }
            r++;
        }
        return ans;
    }
};