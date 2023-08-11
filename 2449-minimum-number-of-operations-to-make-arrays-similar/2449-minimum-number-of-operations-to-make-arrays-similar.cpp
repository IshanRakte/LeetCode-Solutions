class Solution {
public:
    long long makeSimilar(vector<int>& nums, vector<int>& target) {
        sort(nums.begin(), nums.end());
        sort(target.begin(), target.end());
        
        vector<int> oddNums, evenNums, oddTar, evenTar;
        
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] % 2 == 0){
                evenNums.push_back(nums[i]);
            }
            else{
                oddNums.push_back(nums[i]);
            }
            if(target[i] % 2 == 0){
                evenTar.push_back(target[i]);
            }
            else{
                oddTar.push_back(target[i]);
            }
        }
        
        long ans = 0;
        for(int i = 0; i < oddNums.size(); i++){
            ans += abs((oddNums[i] - oddTar[i])) / 2;
        }
        for(int i = 0; i < evenNums.size(); i++){
            ans += abs((evenNums[i] - evenTar[i])) / 2;
        }
        return ans / 2;
    }
};