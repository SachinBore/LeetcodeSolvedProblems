class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int zeros=0, ones=0, twos=0;
        for(int i=0; i<n; i++) {
            if(nums[i] == 0) zeros++;
            else if(nums[i] == 1) ones++;
            else twos++;
        }

        for(int i=0; i<n; i++) {
            if(i<zeros) nums[i] = 0;
            else if(i<zeros+ones) nums[i]=1;
            else nums[i]=2;
        }
    }
};