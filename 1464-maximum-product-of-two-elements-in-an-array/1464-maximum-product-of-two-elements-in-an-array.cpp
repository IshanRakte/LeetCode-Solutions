class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int s = nums.size() , max=0;
        sort(nums.begin(), nums.end());
        for(int i = 0; i < s; i++){
           max = (nums[s-1] - 1) * (nums[s-2] - 1);
        }
        return max;
    }
};