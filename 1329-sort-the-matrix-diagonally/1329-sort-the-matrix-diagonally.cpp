class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        for(int k = mat.size(); k--; )
             for(int i = 0; i < k; i++)
                for(int j = 0; j + 1 < mat[i].size(); j++)
                    if(mat[i][j] > mat[i + 1][j + 1])
                        swap(mat[i][j], mat[i + 1][j + 1]);   
        return mat;
    }
};