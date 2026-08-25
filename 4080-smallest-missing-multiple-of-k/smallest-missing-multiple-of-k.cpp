class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        int i=1;
        while(true)
        {
            int multiple = i*k;
            if(find(nums.begin(),nums.end(),multiple) == nums.end())
            {
                return multiple;
            }
            i++;
        }
        return 0;
        
    }
};