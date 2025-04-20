class Solution {
public:
    int minimumSum(vector<int>& nums) {
        int n = nums.size();

        vector<int> left(n);
        left[0] = nums[0];
        for(int i=1; i<n; i++) {
            left[i] = min(left[i-1], nums[i]);
        }

        vector<int> right(n);
        right[n-1] = nums[n-1];
        for(int i=n-2; i>=0; i--) {
            right[i] = min(right[i+1], nums[i]);
        }

        int sum = INT_MAX;
        for(int i=1; i<n-1; i++) {
            if(left[i-1] < nums[i] && nums[i] > right[i+1]) {
                sum = min(sum, left[i-1] + nums[i] + right[i+1]);
            }
        }

        return (sum == INT_MAX) ? -1 : sum;
    }
};