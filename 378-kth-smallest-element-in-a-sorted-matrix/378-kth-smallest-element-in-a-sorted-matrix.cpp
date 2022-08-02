class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        
    int row=matrix[0].size();
    int col=matrix.size();
    priority_queue<int> s;
    
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            int currunt_element=matrix[i][j];
             s.push(currunt_element);
            
            if(s.size()>k)
                 s.pop();
        }
    }
    return s.top();
    }
};