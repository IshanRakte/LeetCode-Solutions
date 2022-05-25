class Solution {
public:
    int maxEnvelopes(vector<vector<int>>& v) {
        vector<int> ans;
        
        sort(v.begin(),v.end(),[](vector<int> &a,vector<int>&b){
            return a[0]<b[0] || (a[0]==b[0] && a[1]>b[1]);
        });
        
        for(auto x:v){
            auto itr=lower_bound(ans.begin(),ans.end(),x[1])-ans.begin();
            
            if(itr==ans.size()) ans.push_back(x[1]);
            else ans[itr]=x[1];
        }
        return ans.size();
    }
};