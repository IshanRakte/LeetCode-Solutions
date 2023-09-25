class Solution {
public:
    int consecutiveNumbersSum(int n) {
        int i = 1;
        int j = 0;
        int sum = 0;
        while(n > 0){
            n = n - i;
            if(n % i == 0){
                sum++;
            } 
            i++;
        }
        return sum;
    }
};