class Solution {
public:
    int maximumValue(vector<string>& strs) {
        
        int ans = 0;
        
        for(auto it: strs){
            int n = it.length();
            bool ch = false;
            for(auto i:it){
                if(i-'a'>=0 and i-'a'<=25) {
                    ch = true;
                }
            }
            if(ch){
                ans = max(ans, n);
            } 
            else{
                 int a = stoi(it);
                 ans = max(ans, a);
            }
        }
        return ans;
    }
};