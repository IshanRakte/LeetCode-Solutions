class Solution {
public:
    int maxConsecutive(int bottom, int top, vector<int>& s) {
        
        sort(s.begin(), s.end());
        
        int ans = s[0] - bottom;
        
        for(int i = 1; i<s.size(); i++){
            int big = s[i] - s[i-1] - 1;
            ans = max(ans, big);
        }
        ans = max(ans, top-s[s.size()-1]);
        
        return ans;
    }
};