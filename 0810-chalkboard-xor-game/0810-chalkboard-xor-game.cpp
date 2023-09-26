class Solution {
public:
    bool xorGame(vector<int>& nums) {
        int ans = 0;
        for(int i = 0; i < nums.size(); i++){
            ans ^= nums[i];
        }
        if(ans == 0 || nums.size() % 2 == 0){
            return true;
        }
        return false;
    }
};