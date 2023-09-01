class Solution {
public:
    int characterReplacement(string s, int k) {
        int n = s.length(), ans = 0;
        int start = 0, end = 0, maxi = 0;
        map<int, int> freq;
        
        for(end = 0; end < n; end++){
            freq[s[end]]++;
            maxi = max(maxi, freq[s[end]]);

            while(end-start+1 - maxi > k){
                freq[s[start]]--;
                start++;
            }
            ans = max(ans, end-start+1);
        }
        return ans;
    }
};