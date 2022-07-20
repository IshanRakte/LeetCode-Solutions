class Solution {
public:

bool solve(string t,string s){
    int curr=0;
    int n=s.length();
    int m=t.length();
    if(n>m){
        return false;
    }
    if(n==0){
        return true;
    }
    for(int i=0;i<m;i++){
        if(t[i]==s[curr]){
            curr++;
        }
        if(curr>=n){
            return true;
        }
    }
    return false;
}

int numMatchingSubseq(string s, vector<string>& words) {
    int count=0;
    unordered_map<string,int> mp;
    for(int i=0;i<words.size();i++){
        mp[words[i]]++;
    }
    for(auto it: mp){
        if(solve(s,it.first)){
            count+=it.second;
        }
    }
    return count;
    }
};