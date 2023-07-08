class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        if (nums.size() <= 2)
            return -1;
        
        int mini = min(nums[0], nums[1]);
        int maxi = max(nums[0], nums[1]);

        if (nums[2] > mini && nums[2] < maxi)
            return nums[2];
        else if (nums[2] < mini)
            return mini;
        else
            return maxi;
    }
};