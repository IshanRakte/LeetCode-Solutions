class Solution {
public:
    int reductionOperations(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int count = 0;
        for (int i = nums.size() - 1; i >= 1; i--){
           if (nums[0] == nums[i])
                break;

            else if (nums[i] == nums[i - 1])
                continue;
            else{
                count += (nums.size() - 1 - i) + 1;
            }
        }
        return count;
    }
};