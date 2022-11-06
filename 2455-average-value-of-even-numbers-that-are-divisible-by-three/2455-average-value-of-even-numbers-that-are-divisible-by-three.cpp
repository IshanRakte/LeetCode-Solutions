class Solution {
public:
    int averageValue(vector<int>& nums) {
        int sum = 0, count = 0;
        for(int i = 0; i <= nums.size()-1; i++){
            if(nums[i] % 3 == 0 && nums[i] % 2 == 0){
                sum += nums[i];
                count++;
            }
        }
        return count != 0 ? sum/count: 0;
    }
};