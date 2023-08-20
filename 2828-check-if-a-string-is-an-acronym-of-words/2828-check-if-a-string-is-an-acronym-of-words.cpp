class Solution {
public:
    bool isAcronym(vector<string>& words, string s) {
        string ans = "";
        for(int i = 0; i < words.size(); i++){
            ans += words[i][0];
        }
        return ans == s;
    }
};