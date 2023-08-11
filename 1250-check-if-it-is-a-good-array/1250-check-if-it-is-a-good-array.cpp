class Solution {
public:
    bool isGoodArray(vector<int>& nums) {
        int n = 0;
        for(int i = 0; i < nums.size(); i++){
            n = __gcd(n, nums[i]);
            if(n == 1)
                return true;
        }
        return false;
    }
};