class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        
        int valCount = 0;
        int lastPointer = nums.size() - 1;
        for(int i=0; i<nums.size(); i++) {
            if(nums[i] == val) {
                valCount++;
                for(int j = lastPointer; j>i; j--) {
                    if(nums[j] != val) {
                        nums[i] = nums[j] ;
                        lastPointer = j-1;
                        j = i;
                    }
                }
            }
        }

        return nums.size()-valCount;
    }
};