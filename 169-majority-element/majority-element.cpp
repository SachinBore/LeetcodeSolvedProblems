class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int majElement = nums[0];
        int cnt = 1;
        for(int i=1; i<n; i++) {
            if(cnt == 0) majElement = nums[i];
            
            if(nums[i] == majElement) cnt++;
            else cnt--;

            
        }

        return majElement;
    }
};