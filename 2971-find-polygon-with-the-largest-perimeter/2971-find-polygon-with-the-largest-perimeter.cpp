class Solution {
public:
    long long largestPerimeter(vector<int>& nums) {
        long long total_sum = 0;
        for(int i = 0; i < nums.size(); i++){
            total_sum += nums[i];
        }
        long long rem = 0, curr = 0;
        sort(nums.begin(), nums.end(), greater<int>());
        for(int i = 0; i < nums.size(); i++){
            curr += nums[i];
            rem = total_sum - curr;
            if(rem > nums[i]){
                return rem + nums[i];
            }
        }
        return -1;
    }
};