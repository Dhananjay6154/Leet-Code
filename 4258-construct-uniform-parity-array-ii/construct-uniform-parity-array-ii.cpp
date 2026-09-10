class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int mini = *min_element(nums1.begin(),nums1.end());
        if(mini % 2 == 1)
        {
            return true;
        }
        // Check if we can make all even in the nums2
        for(auto num : nums1)
        {
            if(num % 2 == 1)
            {
                return false;
            }
        }        
        return true;
    }
};