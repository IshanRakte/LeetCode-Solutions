class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> ans;
        for (int i = 0; i < nums.size(); i++) {
            int num = nums[i];
            vector<int> temp;
            while (num != 0) {
                temp.insert(temp.begin(), num % 10);
                num /= 10;
            }
            for (int j = 0; j < temp.size(); j++) {
                ans.push_back(temp[j]);
            }
        }
        return ans;
    }
};
