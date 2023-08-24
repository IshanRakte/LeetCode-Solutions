class Solution {
public:
    int minimumSum(int n, int k) {
        int ans = 0;
        int size = 0;
        unordered_set<int> nums;

        for (int i = 1; size < n; i++){
            if (nums.find(i) == nums.end() && nums.find(k - i) == nums.end()){
                ans += i;
                nums.insert(i);
                size++;
            }
        }
        return ans;
    }
};