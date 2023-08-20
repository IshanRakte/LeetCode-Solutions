class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        int j = 0;
        while(j < arr.size()){
            for(int i = 0; i < arr.size(); i++){
                if(arr[i] == 2*arr[j] and i != j){
                    return true;
                }
            }
            j++;
        }
        return false;
    }
};