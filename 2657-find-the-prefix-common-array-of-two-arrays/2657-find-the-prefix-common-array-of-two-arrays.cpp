class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        int n = A.size();
        vector<int> vec;
        for(int i = 0; i < n; i++){
            int count = 0;
            for(int k = 0; k <= i; k++){
                for(int p = 0; p <= i; p++){
                    if(A[k] == B[p]){
                        count++;
                    }
                }
            }
            vec.push_back(count);
        }
        return vec;
    }
};