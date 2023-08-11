class Solution {
public:
    vector<int> longestObstacleCourseAtEachPosition(vector<int>& nums) {
    vector<int> longestSeq;
    vector<int> result(nums.size());
    result[0] = 1;
    longestSeq.push_back(nums[0]);
    
    for (int i = 1; i < nums.size(); i++) {
        if (longestSeq.back() <= nums[i]) {
            longestSeq.push_back(nums[i]);
            result[i] = longestSeq.size();
        } else {
            int insertionIndex = 0;
        while (insertionIndex < longestSeq.size() && longestSeq[insertionIndex] <= nums[i]){
                insertionIndex++;
            }
            longestSeq[insertionIndex] = nums[i];
            result[i] = insertionIndex + 1;
        }
    }
    return result;
    }
};