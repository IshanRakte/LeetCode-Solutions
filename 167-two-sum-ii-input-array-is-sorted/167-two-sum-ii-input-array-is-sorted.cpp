class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target)
    {
        int n = numbers.size();
        int i=0;
		int j=n-1;
        
        while(i<j)
        {
            if(numbers[i]+numbers[j]==target)   
                return vector<int>{i+1,j+1};
            else if(numbers[i]+numbers[j]>target)
                j--;
            else
                i++;
        }
        return vector<int>{};
    }
};