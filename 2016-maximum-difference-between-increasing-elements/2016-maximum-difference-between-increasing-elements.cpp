class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int maxdiff = -1;
        int j = 1;
        int n = nums.size();
        while(j < n){
            for(int i = 0; i < j; i++){
                if(nums[j] > nums[i]){
                int diff = nums[j] - nums[i];
                maxdiff = max(maxdiff, diff);
                }
            }
            j++;
        }
        return maxdiff;
    }
};