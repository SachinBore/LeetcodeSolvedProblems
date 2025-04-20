class Solution {
public:
    int minimumSum(vector<int>& nums) {
        int sum = INT_MAX;
        int n = nums.size();
        for(int i=0; i<n-2; i++) {
            for(int j=i+1; j<n-1; j++) {
                for(int k=j+1; k<n; k++) {
                    if(nums[i] < nums[j] && nums[k] < nums[j]) {
                        sum = min(sum, nums[i]+nums[j]+nums[k]);
                    }
                }
            }
        }
        
        return sum == INT_MAX ? -1 : sum;
    }
};