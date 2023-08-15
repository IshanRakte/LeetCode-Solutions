class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n,0), right(n,0); 
        int rsum = 0;
        
        for(int i = n-2; i >= 0; i--){
            right[i] = right[i+1] + nums[i+1];
        }
        for(int i = 0; i < n; i++){
            ans[i] = abs(right[i] - rsum);
            rsum += nums[i];
        }
        return ans;   
    }
};