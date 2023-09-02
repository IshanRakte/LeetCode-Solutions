class Solution {
public:
    int maxPower(string s) {
        int ans = 1,temp = 1;
        for(int i = 1; i < s.length(); i++){
            if(s[i] == s[i-1]){
                temp++;
            }
            else{
                ans = max(ans,temp);
                temp = 1;
            }
        }
        ans = max(ans,temp);
        return ans;

    }
};