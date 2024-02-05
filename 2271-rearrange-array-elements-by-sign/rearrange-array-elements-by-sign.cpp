class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int even = 0;
        int odd = 1;
        int n = nums.size();
        vector<int> res(n);
        for(int i=0; i<n; i++) {
            if(nums[i] < 0) {
                res[odd] = nums[i];
                odd += 2;
            }
            else {
                res[even] = nums[i];
                even += 2;
            }
        }

        return res;
    }
};