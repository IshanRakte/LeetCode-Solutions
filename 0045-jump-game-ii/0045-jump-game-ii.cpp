class Solution {
public:
    int jump(vector<int>& nums) {
        int jumps = 0;
        int currentJump = 0; 
        int maxi = 0;    
        for (int i = 0; i < nums.size() - 1; i++) {
            maxi = max(maxi, i + nums[i]);

            if (i == currentJump) {
                jumps++;
                currentJump = maxi;
            }
        }
        return jumps;
    }
};