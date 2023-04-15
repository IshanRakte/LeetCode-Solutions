class Solution {
public:
    bool isSubsequence(string s, string t) {

        int n = 0;
        int j = 0;
        while(n < s.size() && j < t.size()){
            if(s[n]==t[j]){
                n++;
            }
            j++;
        }
        if(n == s.size()) return true;
        return false;
    }
};