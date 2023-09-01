class Solution {
public:
    int longestNiceSubarray(vector<int>& nums) {
    int temp = 0, j = 0, ans = 0;
    for(int i = 0; i < nums.size(); ++i) {
        while((temp & nums[i]) != 0)
            temp ^= nums[j++];
        temp |= nums[i];
        ans = max(ans, i - j + 1);
    }
    return ans;
    }
};