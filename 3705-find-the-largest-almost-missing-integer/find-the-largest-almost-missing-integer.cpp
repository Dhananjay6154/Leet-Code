class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        int maxi = INT_MIN;
        unordered_map<int,int> mp;
        for(auto x:nums)
        {
            mp[x]++;
        }
        if(k == 1)
        {
            for(int i=0;i<nums.size();i++)
            {
                if(mp[nums[i]] == 1)
                {
                    maxi = max(maxi,nums[i]);
                }
            }
            if(maxi == INT_MIN)
            {
                return -1;
            }
            return maxi;
        }
        if(k == nums.size())
        {
            for(int i=0;i<nums.size();i++)
            {
                maxi = max(maxi,nums[i]);
            }
            return maxi;
            
        }
        int first = nums[0];        
        int last = nums[nums.size() - 1];
        bool firstValid = (mp[first] == 1);
        bool lastValid = (mp[last] == 1);

        if(firstValid && lastValid)
        {
            return max(first,last);
        }
        if(firstValid)
        {
            return first;
        }
        if(lastValid)
        {
            return last;
        }
        return -1;
    }
};