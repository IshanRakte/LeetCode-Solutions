class Solution {
public:
    int maxArea(int h, int w, vector<int>& hCuts, vector<int>& vCuts) {
        hCuts.push_back(0);
        hCuts.push_back(h);
        
        vCuts.push_back(0);
        vCuts.push_back(w);
        
        sort(hCuts.begin(), hCuts.end());
        sort(vCuts.begin(), vCuts.end());
        
        int hMax=INT_MIN, vMax = INT_MIN;
        
        for(int i=1; i<hCuts.size(); i++){
            hMax = max(hMax, (hCuts[i]-hCuts[i-1]));
        }
        
        for(int i=1; i<vCuts.size(); i++){
            vMax = max(vMax, (vCuts[i]-vCuts[i-1]));
        }
        
        return ((long long)hMax*vMax)%1000000007;
    }
};