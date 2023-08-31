class Solution {
public:
    int takeCharacters(string s, int k) {
        int n = s.length(), start = 0, ans = INT_MAX, count = 0;
        unordered_map<char,int> map;
        
        for(auto &ch : s){
            map[ch]++;
        }
        
        if(map['a'] < k || map['b'] < k || map['c'] < k){
            return -1;
        }
        for(int i = 0; i < n; i++){
            map[s[i]]--;
            count++;
            
            while(map[s[i]] < k){
                map[s[start++]]++;
                count--;
            }
            ans = min(ans, n-count);
        }
        return ans;
    }
};