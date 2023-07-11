class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        
        int n = nums[nums.size() - 1];
        int ans = nums[nums.size() - 1];
        for(int i = 1; i<k; i++){
            n+=1;
            ans+=n;
        }
        return ans;
    }
};
