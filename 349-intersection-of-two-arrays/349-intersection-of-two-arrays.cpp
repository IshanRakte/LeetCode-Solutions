class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        int n1 = (int)nums1.size(), n2 = (int)nums2.size();
        int i = 0, j = 0;
        vector<int> res;
        while(i < n1 && j < n2){
            if(nums1[i] == nums2[j]) {
                res.push_back(nums1[i]);
                i++;
                j++;
            }
            else if(nums1[i] > nums2[j]){
                j++;
            }
            else{
                i++;
            }
            while(i > 0 && i < n1 && nums1[i] == nums1[i - 1]) i++;
            while(j > 0 && j < j && nums2[j] == nums2[j - 1]) j++;
        }
        return res;
}
};