class Solution {
public:
    int findMaxK(vector<int>& nums) {
        
        sort(nums.begin(), nums.end());
        int i = 0, n = nums.size()-1;
        
        while(n>i){
            int sum = nums[i] + nums[n];
            if(sum == 0){
                return nums[n];
            }
            else if(sum > 0){
                n--;
            }
            else{
                i++;
            }
        }
        return -1;
    }
};