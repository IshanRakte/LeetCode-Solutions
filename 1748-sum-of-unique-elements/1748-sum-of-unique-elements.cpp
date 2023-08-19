class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        unordered_map<int, int> map;
        
        for(int i = 0; i < nums.size(); i++){
            int x = nums[i];
            map[x]++;
        }
        int sum = 0;

         for(auto x : map){
            if(x.second == 1){
                sum += x.first; 
            }
        }
        return sum; 
    }
};