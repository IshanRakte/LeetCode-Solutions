class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int right = 0, left = 1;
        vector<int> ans(nums.size(), 0);
        
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] < 0){
                ans[left] = nums[i];
                left += 2;
            }
            else{
                ans[right] = nums[i];
                right += 2;
            }
        }
        return ans;
    }
};