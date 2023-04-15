class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        
        int i=0, pivot_count=0;
        vector<int> temp;
        vector<int> ans;
        
        for(i=0; i<nums.size(); i++){
            if(nums[i] == pivot){
                pivot_count++;
            }
            else if(nums[i] > pivot){
                temp.push_back(nums[i]);
            }
            else{
                ans.push_back(nums[i]);
            }
        }
        ans.insert(ans.begin() + ans.size(), pivot_count, pivot);
        ans.insert(ans.end(), temp.begin(), temp.end());
        return ans;
    }
};