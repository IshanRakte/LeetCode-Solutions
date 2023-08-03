class Solution {
public:
    int findGCD(vector<int>& nums) {
        int maxi = nums[0];
        int mini = nums[0];
        
        for (int k = 1; k < nums.size(); k++) {
            maxi = max(maxi, nums[k]);
            mini = min(mini, nums[k]);
        }

        while (mini != 0) {
            int temp = mini;
            mini = maxi % mini;
            maxi = temp;
        }
        
        return maxi;
    }
};
