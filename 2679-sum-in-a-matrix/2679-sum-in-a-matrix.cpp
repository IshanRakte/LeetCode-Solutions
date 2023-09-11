class Solution {
public:
    int matrixSum(vector<vector<int>>& nums) {
        int ans = 0;
        for(int i = 0; i < nums.size(); i++){    
            sort(nums[i].begin(), nums[i].end());
        }
        for(int i = 0; i < nums[0].size(); i++){
            int count = 0;
            for(int j = 0; j < nums.size(); j++){
                count = max(count, nums[j][i]);
            }
            ans += count;
        }
        return ans;
    }
};