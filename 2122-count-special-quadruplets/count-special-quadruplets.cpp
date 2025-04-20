class Solution {
public:
    int countQuadruplets(vector<int>& nums) {
        int n = nums.size();

        int ans = 0;
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                for (int k = j + 1; k < n; k++) {
                    for (int l = k + 1; l < n; l++) {
                        long long sum = nums[i];
                        sum += nums[j];
                        sum += nums[k];
                        sum -= nums[l];
                        if (sum == 0) {
                            ans++;
                        }
                    }
                }
            }
        }

        return ans;
    }
};