class Solution {
public:
    bool isPossible(vector<int>& nums) {
        
        vector<pair<int,int>>ans;
        int n=nums.size(), len=0, i=0;
        ans.push_back({nums[0],1});
        
        for(int i=1;i<n;i++){
             if(nums[i]!=nums[i-1]) len=ans.size()-1;
          
             if(len>=0 && ans[len].first==nums[i]-1){
                    ans[len].first=nums[i];
                    ans[len].second+=1;
                    len--;
              }
              else{
                     ans.push_back({nums[i],1});
                }
        }
        len=ans.size();
        for(int  i=0;i<len;i++){
            if(ans[i].second<3) return false;
        }
        return true;
    }
};