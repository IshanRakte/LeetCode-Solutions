class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        int ans = 0;
        int count = 0;
        for(int i = 0; i<nums.size(); i++){
            if(count == 0){
                ans = nums[i];
            }
            if(nums[i] == ans) count++;
            else count--;
        }
        count = 0;
        for(int i = 0; i<nums.size(); i++){
            if(ans == nums[i]) count++;
        }
        if(count > nums.size()/2) return ans;
        return -1;
    }
};