class Solution {
public:
    long long countOperationsToEmptyArray(vector<int>& nums) {
        unordered_map<int, int> pos;
        long long n = nums.size(), res = n;
        for (int i = 0; i < n; ++i){
            pos[nums[i]] = i;
        }
            
        sort(nums.begin(), nums.end());
        
        for (int i = 1; i < n; ++i)
            if (pos[nums[i]] < pos[nums[i - 1]])
                res += n - i;
        return res;
    }
};