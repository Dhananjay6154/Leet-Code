class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int mini = INT_MAX;
        int maxi = INT_MIN;
        for(auto x:nums)
        {
            if(x < mini)
            {
                mini = x;
            }
            if(x > maxi){   
                maxi = x;
            }
        } 
        vector<int> ans;
        unordered_set<int> st;
        for(auto x : nums)
        {
            st.insert(x);
        }

        for(int i=mini;i<=maxi;i++)
        {
            if(st.find(i) == st.end())
            {
                ans.push_back(i);
            }
        }
        return ans;
    }
};