class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> ans;
        int maxi;
        int k;
        for(int i = 0; i < candies.size(); i++){
            maxi = candies[i] + extraCandies;
            k = maxi;
            for(int i = 0; i < candies.size(); i++){
                k = max(candies[i], k);
                }
                if(k == maxi){
                    ans.push_back(true);
                }
                else{
                    ans.push_back(false);
                }
            }
            return ans;
        }
};