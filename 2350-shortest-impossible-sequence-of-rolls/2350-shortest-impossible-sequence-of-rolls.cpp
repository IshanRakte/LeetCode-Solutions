class Solution {
public:
    int shortestSequence(vector<int> & rolls, int k) {
    int n = rolls.size();
    set<int> set;
    int ans = 1;
    
    for(int i = 0; i < n; i++){
        set.insert(rolls[i]);
        if(set.size() == k){
            ans++;
            set.clear();
        }
    }
    return ans;
}
};