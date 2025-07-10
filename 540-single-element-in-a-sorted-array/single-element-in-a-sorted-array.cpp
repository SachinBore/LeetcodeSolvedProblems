class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int xr = 0;
        
        for(int i=0; i<nums.size(); i++) xr ^= nums[i];

        return xr;
    }
};