class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
        vector<int> arr;
        int a= 0, len = pref.size();
        for(int i = 0; i < len; i++){
            arr.push_back(pref[i] ^ a);
            a^= arr.back();
        }
        return arr;
    }
};