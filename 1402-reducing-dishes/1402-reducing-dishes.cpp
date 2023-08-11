class Solution {
public:
    int maxSatisfaction(vector<int>& satisfaction) {
        int n = satisfaction.size();
        int maxi = INT_MIN;
        int level;
        int sum = 0;
        
        sort(satisfaction.begin(), satisfaction.end());
        
        if(satisfaction[n - 1] < 0){
            return sum;
        }
        
        for(int i = 0; i < n; i++){
            level = 1;
            sum = 0;
            for(int j = i; j < n; j++){
                sum += (satisfaction[j] * level);
                level++;
            }
            maxi = max(sum, maxi);
        }
        return maxi;
    }
};