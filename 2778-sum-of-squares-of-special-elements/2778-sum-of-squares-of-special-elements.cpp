class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;
        for(int i = 0; i <= nums.size() - 1; i++){
            if(n % (i+1) == 0){
                ans = ans + (nums[i] * nums[i]);
            }
        }
        return ans;
    }
};