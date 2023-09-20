class Solution {
public:
    int reinitializePermutation(int n) {
        int position = n/2;
        int ans = 1;
        while(position != 1){
            ans++;
            if(position % 2 == 0){
                position = position/2; 
            } 
            else{
                position = n/2 + (position-1)/2;
            }  
        }
        return ans;
    }
};