class Solution {
public:
    int maximumXOR(vector<int>& nums) {
    return accumulate(begin(nums), end(nums), 0, bit_or<int>());
    }
};