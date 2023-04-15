class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        
        vector<int> res(nums.size());
        
        int i = 0;
        int j = nums.size() - 1;
        for(int k = nums.size() - 1; k >= 0; k--){
            if(abs(nums[j]) > abs(nums[i])){
                res[k] = nums[j] * nums[j--];
            }
            else{
                res[k] = nums[i] * nums[i++];
            }
    }
         return res;
}              
};