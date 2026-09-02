class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        
        unordered_set<int> seen;
        unordered_set<int> invalid;
        
        for (int i = 0; i < nums.size(); i++) {
            
            // agar nya block start hua 
            if (i == 0 || nums[i] != nums[i - 1]) {
                
                //If number is already in the block.
                if (seen.find(nums[i]) != seen.end()) {
                    invalid.insert(nums[i]);
                }
                
                // Add No. In seen
                seen.insert(nums[i]);
            }
        }
        
        return seen.size() - invalid.size();
    }
};