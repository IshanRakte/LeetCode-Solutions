class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        int n = tickets.size();
        int t = tickets[k];
        int ans = 0;
        for (int i = 0; i < n; i++){
            if (tickets[i] < t){
                ans += tickets[i];
            }
            else{
                if (i <= k){
                    ans += t;
                }
                else{
                    ans += t - 1;
                }
            }
        }
        return ans;
    }
};