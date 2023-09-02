class Solution {
public:
    long long getDescentPeriods(vector<int>& prices) {
        int n = prices.size();
        vector<int> diff(n, 0);

        for (int i = 1; i < n; i++) {
            diff[i] = prices[i - 1] - prices[i];
        }
        int i = 0, j = 0;
        long long count = 0, ans = 0;

        while (j < n) {
            if (diff[j] != 1) {
                count = 0;   
                ans += 1;           
                i = j;             
            } 
            else {
                count = j - i + 1;  
                ans += count;       
            }
            j++;                   
        }
        return ans;
    }
};