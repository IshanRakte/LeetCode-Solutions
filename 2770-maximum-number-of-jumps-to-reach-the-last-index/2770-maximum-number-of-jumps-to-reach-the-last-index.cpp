class Solution {
public:
    int maximumJumps(vector<int>& nums, int target) {
        int n = nums.size();
        vector<int> dp(n, -1);
        dp[0] = 0;
        for(int i = 0; i < n; i++){
            if(dp[i] != -1)
            for(int j = i+1; j < n; j++){
                if(abs(nums[i]-nums[j]) <= target){
                    dp[j] = max(dp[j], dp[i]+1);
                }
            }
        }
        if(dp[n-1] == -1) return -1;
        return dp[n-1];
    }
};