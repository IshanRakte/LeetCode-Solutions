class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        
        int first = occ(nums, target, true);
        int last = occ(nums, target, false);
    
        return {first, last};
        
    }
    int occ(vector<int>& nums, int target, bool flag){
        int s = 0, e = nums.size() - 1;
        int mid = s + (e - s)/2;
        int ans = -1;
        while(s <= e){
            if(nums[mid] == target){
                ans = mid;
                if(flag){
                    e = mid - 1;
                }
                else{
                    s = mid + 1;
                }
            }
            else if(nums[mid] < target){
                s = mid + 1;
            }
            else{
                e = mid - 1;
            }
            mid = s + (e - s)/2;
        }
        return ans;
    }
};