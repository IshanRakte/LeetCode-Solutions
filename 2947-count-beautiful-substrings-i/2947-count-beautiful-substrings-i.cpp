class Solution {
public:
    int beautifulSubstrings(string s, int k) {
        int ans = 0;
        int n = s.size();
        
        for(int i = 0; i < n; i++){
            int con = 0, vow = 0;
            for(int j = i; j < n; j++){
               if(s[j] == 'a' || s[j] == 'e'|| s[j] == 'i'|| s[j] =='o' || s[j] == 'u'){
                   vow++;
               }
               else con++;
               if((vow == con) && ((vow*con) % k == 0)) ans++;
            }
        }
        return ans;
    }
};