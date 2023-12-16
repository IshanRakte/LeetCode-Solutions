class Solution {
public:
    int minimumAddedCoins(vector<int>& coins, int target) {
       
        int i = 0;
        int count = 0;
        int x = 0;
        
        sort(coins.begin(), coins.end());
        
        while(i < coins.size() and x < target){
            if(coins[i] <= x + 1){
                x += coins[i];
                i++;
            } 
            else{
                count++;
                x += x+1;
            }
        } 
        while(x < target){
            count++;
            x += x+1;
        }
        return count;
    }
};