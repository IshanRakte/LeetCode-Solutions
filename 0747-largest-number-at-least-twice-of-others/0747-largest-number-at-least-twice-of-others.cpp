class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int maxi = INT_MIN;
        int index = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] > maxi){
                maxi = max(maxi, nums[i]);
            index = i;
            }
        }
        for(int i = 0; i < nums.size(); i++){
            if(maxi < 2*nums[i] and nums[i] != maxi){
                return -1;
            }
        }
        return index;
    }
};