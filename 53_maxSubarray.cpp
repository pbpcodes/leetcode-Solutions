class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int currentSum = nums[0], overallSum = nums[0];
        for(int i=1;i<nums.size();++i){
            if(currentSum>0){
                currentSum += nums[i];
            }
            else
                currentSum = nums[i];
            if(currentSum > overallSum)
                overallSum = currentSum;
            
        }
        return overallSum;
    }
};