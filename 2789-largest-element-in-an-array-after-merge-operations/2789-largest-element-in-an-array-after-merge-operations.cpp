class Solution {
public:
    long long maxArrayValue(vector<int>& nums) {
        int n = nums.size();
        long long sum = nums[n - 1];
        
        for(int i = n-2; i >= 0; i--){
            int temp = nums[i];
            if(temp <= sum){
                sum += temp;
            }
            else sum = temp;
        }
        return sum;
    }
};