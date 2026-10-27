class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n = nums.size();
        vector<int> freq(n+1,0);

        int missing = -1;
        int duplicate = -1;

        for(auto x:nums)
        {
            freq[x]++;
        }
        for(int i=1;i<freq.size();i++)
        {
            if(freq[i] == 2)
            {
                duplicate = i;
            }
            if(freq[i] == 0)
            {
                missing = i;
            }
        }
        return {duplicate, missing};
        
    }
};