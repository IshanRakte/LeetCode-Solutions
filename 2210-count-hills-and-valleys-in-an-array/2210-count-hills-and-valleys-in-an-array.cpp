class Solution {
public:
    int countHillValley(vector<int>& nums) {
        int j = 0;
        int count = 0;
        for(int i = 1; i < nums.size()-1; i++){
            if((nums[i] > nums[j] && nums[i] > nums[i+1])|| 
               (nums[j] > nums[i] && nums[i] < nums[i+1])){
                count++;
                j = i;
            }
        }
        return count;
    }
};