class Solution {
public:
    int minPatches(vector<int>& nums, int n) {
        
        long patches = 0, count = 1, i = 0, size = nums.size();
        
        while (count <= n) {
            if (i < size && nums[i] <= count){
                count = count + nums[i];
                i++;
            } 
            else {
                count = count * 2;
                patches++;
            }
        }
        return patches;
    }
};