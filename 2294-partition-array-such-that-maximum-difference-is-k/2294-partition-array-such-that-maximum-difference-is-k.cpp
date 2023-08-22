class Solution {
public:
    int partitionArray(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int res = 1; 
        int mini = nums[0];

        for(int i = 0; i < nums.size(); i++){
           if((nums[i] - mini) > k){
               res++;
               mini = nums[i];
           }
        }
        return res;
    }
};