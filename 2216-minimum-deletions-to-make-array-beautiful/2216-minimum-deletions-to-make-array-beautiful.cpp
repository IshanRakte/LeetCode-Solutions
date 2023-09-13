class Solution {
public:
    int minDeletion(vector<int>& nums) {
        int n = nums.size();
		int count = 0;
		for(int i = 0; i < n-1;){
			if(nums[i] == nums[i+1]){
				i++;
				count++;
			}
			else{
				i += 2;
			}
		}
		if(n % 2 == 0  and count % 2 != 0){
			count++;
		}
		if(n % 2 == 1 and count % 2 == 0){
			count++;
		}
		return count;
    }
};