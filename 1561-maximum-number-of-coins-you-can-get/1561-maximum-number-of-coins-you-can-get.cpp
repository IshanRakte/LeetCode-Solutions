class Solution {
public:
    int maxCoins(vector<int>& piles) {
        sort(piles.begin(), piles.end());
        int j = piles.size() - 1, ans = 0;
        for(int i = 0; i < piles.size()/3; i++){ //n/3 times loop chalega
            j--; //alice ka turn
            ans += piles[j]; //mera turn
            j--; //bob ka turn
        }
        return ans;
    }
};