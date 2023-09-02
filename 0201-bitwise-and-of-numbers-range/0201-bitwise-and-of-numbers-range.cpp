class Solution {
public:
    int rangeBitwiseAnd(int m, int n) {
       
        if ((m == 0) || (n == 0)) return 0;
        
        if ((int)log2(m) != (int)log2(n)) return 0;
        
        int ans = m;
        for (long i = m; i <= n; i++){
            ans &= i;
        }       
        return ans;
    }
};