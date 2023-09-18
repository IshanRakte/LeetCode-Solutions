class Solution {
public:
    int countWays(vector<int>& nums) {
        
        int n = nums.size();    
        sort(nums.begin(), nums.end());
        int ans = 0;
        if(nums[0] != 0){
            ans++;
        }
        for(int i = 0; i < n-2; i++){
            if(i+1 > nums[i] && nums[i+1] > i+1){
                ans++;
            }
        }
        if(n > nums[n-1]){
            ans++;
        }
        return ans;
    }
};
