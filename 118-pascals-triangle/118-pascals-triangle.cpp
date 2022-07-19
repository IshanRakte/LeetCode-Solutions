class Solution {
    vector<vector<int>>ans;
public:    
    vector<vector<int>>& generate(int n) {
        if(n) {
            generate(n-1);                       
            ans.emplace_back(vector<int>(n,1));  
            for(int i = 1; i < n-1; i++)         
                ans[n-1][i] = ans[n-2][i] + ans[n-2][i-1];    
        }
        return ans;
    }
};