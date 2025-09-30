class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();

        int zero = -1;
        for(int i=0; i<n; i++) {
            if(nums[i] == 0) {
                zero = i;
                break;
            }
        }

        if(zero == -1) return;

        int ones = zero;
        for(int i=zero+1; i<n; i++) {
            if(nums[i] != 0) {
                swap(nums[ones], nums[i]);
                ones++;
            }
        }
    }
};