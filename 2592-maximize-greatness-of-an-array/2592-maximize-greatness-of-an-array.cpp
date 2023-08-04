class Solution {
public:
    int maximizeGreatness(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int start = 0;
        int count = 0;
        for(int i = 1; i <= nums.size() - 1; i++){
            if(nums[start] < nums[i]){
                start++;
                count++;
            }
        }
        return count;
    }
};