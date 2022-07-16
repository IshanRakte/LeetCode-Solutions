class Solution {
public:
    
    int dp[51][51][51];
    int mod = 1e9 + 7;
    int out_of_boundary(int m, int n, int x, int y){
        if(x < 0 or y < 0 or x >= m or y >= n)
            return 1;
        return 0;
        
    }
    
    int fun(int m, int n, int maxMove, int x, int y, int currMov){
      if(out_of_boundary(m, n, x, y) and currMov <= maxMove)
          return 1;
        
        if(currMov > maxMove)
            return 0;
        
        if(dp[x][y][currMov] != -1)
            return dp[x][y][currMov];
        
        int cnt = 0;
        cnt = (cnt % mod + fun(m, n, maxMove, x + 1, y, currMov + 1) % mod) % mod;
        cnt = (cnt % mod + fun(m, n, maxMove, x - 1, y, currMov + 1) % mod) % mod;
        cnt = (cnt % mod + fun(m, n, maxMove, x, y + 1, currMov + 1) % mod) % mod;
        cnt = (cnt % mod + fun(m, n, maxMove, x, y - 1, currMov + 1) % mod) % mod;
        return dp[x][y][currMov] = cnt;
    }
    
    int findPaths(int m, int n, int maxMove, int startRow, int startColumn) {
        memset(dp, -1, sizeof dp);
        return fun(m, n, maxMove, startRow, startColumn, 0);
    }
};