class Solution {
public:
    long long minimumReplacement(vector<int>& nums) {
        long long ans = 0;
        int n = nums.size();
        int last = nums[n-1];
        int steps = 0;
        for(int i = n-2; i >= 0; i--){
            if(nums[i] > last){
                steps = (nums[i] - 1) / last;
                last = nums[i] / (steps + 1);
                ans += steps;
            }else{
                last = nums[i];
            }
        }
        return ans;
    }
};