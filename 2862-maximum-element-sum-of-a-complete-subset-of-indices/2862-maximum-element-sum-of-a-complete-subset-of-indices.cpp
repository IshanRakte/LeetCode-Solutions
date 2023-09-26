class Solution {
public:
    long long maximumSum(vector<int>& nums) {
        long ans = 0;
        for(int i = 0; i < nums.size(); i++){
            int extra = i + 1;
            long run = 0;
            for(int j = 1; j*j*extra - 1 < nums.size(); j++){
                run += nums[j*j*extra - 1];
            }
            ans = max(run, ans);
        }
        return ans;
    }
};