class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int count = 0;
        int left = 0;
        int right = people.size()-1;
      
        sort(people.begin(), people.end());

        while(left <= right){
            int weight = people[left] + people[right]; 
            count++;
            if(weight <= limit) {
                left++;
                right--;
            }
            else{
                right--;
            }
        }
        return count;
    }
};