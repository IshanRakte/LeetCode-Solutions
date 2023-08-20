class Solution {
public:
    bool checkIfPangram(string sentence) {
        unordered_map<char, int> umap;
        for(auto i: sentence){
            umap[i]++;
        }
        return umap.size()==26;
    }
};