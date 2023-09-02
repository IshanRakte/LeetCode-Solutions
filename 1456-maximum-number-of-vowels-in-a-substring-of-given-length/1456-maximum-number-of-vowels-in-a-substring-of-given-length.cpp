class Solution {
public:
    bool isVowel(char c){
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') return true;
        return false;
    }
    int maxVowels(string s, int k) {
        int ans = INT_MIN; int count = 0;
        int n = s.length();
        
        for(int i = 0; i < k; i++) if(isVowel(s[i])) count++;
        ans = max(ans,count);
        for(int i = 1; i < n-k+1; i++){
            if(isVowel(s[i-1])) count--;
            if(isVowel(s[i+k-1])) count++;
            ans=max(ans,count);
        }
        return ans;
    }
};