class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        unordered_map<int,int> count;
        for(auto i:nums){
            count[i]++;
        }
        return count.size()-count.count(0);
    }
};