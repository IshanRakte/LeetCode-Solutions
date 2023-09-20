class Solution {
public:
    int getMaximumConsecutive(vector<int>& coins) {
        int n = coins.size();
        sort(coins.begin(), coins.end());
        int maxi = 1;
        for(int i = 0; i < n; i++){
            if(coins[i] > maxi){
                return maxi;
            }
            maxi += coins[i];
        }
        return maxi;
    }
};