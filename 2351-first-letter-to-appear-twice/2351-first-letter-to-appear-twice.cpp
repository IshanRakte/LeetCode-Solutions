class Solution {
public:
char repeatedCharacter(string s) {
    int seen[128] = {}, i = 0;
    for (i = 0; i < s.size() && ++seen[s[i]] < 2; ++i);
    return s[i];
    }
};