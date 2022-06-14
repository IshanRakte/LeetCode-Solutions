class Solution {
public:
    bool divideArray(vector<int>& nums) {
        
        sort(nums.begin(), nums.end());
        int i = 1;
        
        while(i<nums.size()){
            if(nums[i-1] != nums[i])
                return false;
            i += 2;
        }
        return true;
    }
};