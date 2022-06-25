class Solution {
public:
    int countPrefixes(vector<string>& words, string s) {
    int count=0;
    for(int i=0; i<words.size(); i++){
        string z= s.substr(0, words[i].size());
        if(words[i] == z){
            count++;
        }    
    }
    return count;
    }
};