class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        int maxValue = *max_element(nums.begin(), nums.end());
        long long result = 0;
        int maxCount = 0;
        for (int l = 0, r = 0; r < nums.size(); r++) {
            if (nums[r] == maxValue) maxCount++;
            if (maxCount < k) continue;
            while (maxCount > k) {
                if (nums[l] == maxValue) maxCount--;
                l++;
            }
            while ((l < r) && (nums[l] != maxValue)) l++;
            result += (l + 1);
        }
        return result;
    }
};