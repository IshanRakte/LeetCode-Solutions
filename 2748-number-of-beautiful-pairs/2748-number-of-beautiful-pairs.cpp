class Solution {
public:
    int countBeautifulPairs(vector<int>& nums) {
        int count = 0;
        for(int i = 0; i < nums.size() - 1; i++){
            for(int j = i+1; j < nums.size(); j++){
                int first = to_string(nums[i])[0] - '0';
                int last = nums[j] % 10;
                if(gcd(first, last) == 1){
                    count++;
                }
            }
        }
        return count;
    }
};