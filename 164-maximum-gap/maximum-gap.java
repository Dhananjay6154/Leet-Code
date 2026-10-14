class Solution {
    public int maximumGap(int[] nums) {
        int gap = 0;
        int maxGap = 0;
        int n = nums.length;
        Arrays.sort(nums);
        if(n==1) return 0;
        for(int i = 0 ; i < n -1 ; i++){
            gap = Math.abs(nums[i+1] - nums[i]);
            maxGap = Math.max(gap,maxGap);
        
    }
    return maxGap;
}
}