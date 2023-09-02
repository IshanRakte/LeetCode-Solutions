class Solution {
public:
    long long countSubarrays(vector<int>& nums, long long k) {
        long long ans = 0, sum = 0;
        int start = 0, end = 0;
        
        while(end < nums.size()){
            sum += nums[end];
            
            while(sum * (end-start+1) >= k){
                sum -= nums[start];
                start++;
            }
            ans += (end-start+1);
            end++;
        }
        return ans;
    }
};