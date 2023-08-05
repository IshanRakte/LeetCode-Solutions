class Solution {
public:
    int kItemsWithMaximumSum(int numOnes, int numZeros, int numNegOnes, int k) {
        int maxi = 0;
        if(k > numOnes + numZeros && numNegOnes != 0){
            maxi = k - (numOnes + numZeros);
            return numOnes - maxi;
        }
        else {
            if(k >= numOnes){
                return numOnes;
            }
            else{
                return k;
            }
        }
    }
};