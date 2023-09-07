class Solution {
public:
    vector<int> ans;
    Solution(vector<int>& nums) {
        for(int i = 0; i < nums.size(); i++){
            ans.push_back(nums[i]);
        }
    }
    
    int pick(int target) {
        vector<int> temp;
        for(int i = 0; i < ans.size(); i++){
            if(ans[i] == target){
                temp.push_back(i);
            }
        }
        return temp[rand()%temp.size()];
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(nums);
 * int param_1 = obj->pick(target);
 */
/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(nums);
 * int param_1 = obj->pick(target);
 */