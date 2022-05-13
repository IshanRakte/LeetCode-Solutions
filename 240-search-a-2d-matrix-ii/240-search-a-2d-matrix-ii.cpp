class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        int row = matrix.size();
        int col = matrix[0].size();
        
        int rowin = 0;
        int colin = col - 1;
        
        while(rowin < row && colin >=0){
            int element = matrix[rowin][colin];
            
            if(element == target){
                return 1;
            }
            if(element < target){
                rowin++;
            }
            else{
                colin--;
            }
        }
        return 0;
    }
};