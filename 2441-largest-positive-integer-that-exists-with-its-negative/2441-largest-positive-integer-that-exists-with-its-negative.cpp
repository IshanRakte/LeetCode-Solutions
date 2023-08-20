class Solution {
public:
    int findMaxK(vector<int>& nums) {
        vector<int> ans;
        for(int i = 0; i < nums.size(); i++){
            for(int j = 0; j < i; j++){
                if(nums[i] + nums[j] == 0){
                    ans.push_back(max(nums[i], nums[j]));
                }
            }
        }
        if(ans.empty()){
            return -1;
        }
        int anss= *max_element(ans.begin(), ans.end());
        return anss;
    }
};