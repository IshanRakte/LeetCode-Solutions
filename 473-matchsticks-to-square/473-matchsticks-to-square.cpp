class Solution {
public:
    
    vector<int> sides = {0, 0, 0, 0};
    bool helper(vector<int>& matchsticks, int i, int n, int target){
        if(i == n){
            return true;
        }
        for(int k = 0; k < 4; k++){
            if(sides[k] + matchsticks[i] <= target){
                sides[k] += matchsticks[i];
                if(helper(matchsticks, i + 1, n, target))
                    return true;
                sides[k] -= matchsticks[i];
            }
        }
        return false;
    }
    
    bool makesquare(vector<int>& matchsticks) {
        
        int n = matchsticks.size();   
        int sum = 0;
        for(int i = 0; i < n; i++){
            sum += matchsticks[i];
        }
        if(sum % 4)
            return false;
        int target = sum / 4; 
        sort(matchsticks.begin(), matchsticks.end(), greater<int> ()); 
        return helper(matchsticks, 0, n, target);
    }
};