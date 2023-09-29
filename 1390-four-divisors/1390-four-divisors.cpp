class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
    int ans = 0, sum, count;
    for (int i = 0; i < nums.size(); i++) {
        sum = 0;
        count = 0;
        for (int j = 1; j * j <= nums[i]; j++) {
            if (nums[i] % j == 0) {
                if (nums[i] / j == j) {
                    sum += j;
                    count++;
                } else {
                    sum += j + (nums[i] / j);
                    count += 2;
                }
            }
        }
        if (count == 4) {
            ans += sum;
        }
    }
    return ans;
}

};