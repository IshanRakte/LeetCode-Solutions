class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int size = nums.size();
        if(!size) return 0;
        sort(nums.begin(), nums.end());
        int longest = 0;
        int current_longest = 1;
        for(int i=1;i<size;i++){
            if(nums[i] == nums[i-1]) continue; 
            else if(nums[i] == nums[i-1] + 1) current_longest++; 
            else longest = max(longest,current_longest), current_longest = 1; 
        }
        return max(longest,current_longest);
    }
};