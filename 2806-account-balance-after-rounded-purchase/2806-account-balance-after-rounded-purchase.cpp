class Solution {
public:
    int accountBalanceAfterPurchase(int purchaseAmount) {
        int ans = purchaseAmount % 10;
        if(ans < 5){
            purchaseAmount -= ans;
        }
        else{
            purchaseAmount += 10 - ans;
        }
        return 100 - purchaseAmount;
    }
};
