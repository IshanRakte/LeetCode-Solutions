class Solution {
public:
    int longestContinuousSubstring(string s) {
        int temp = 1, ans = 1;
        for (int i = 1; i < s.size(); i++) {
        if (s[i] - s[i-1] == 1) {
            temp = temp + 1;
        } 
        else {
            temp = 1;
        }
        ans = max(ans, temp);
    }
    return ans;
    }
};