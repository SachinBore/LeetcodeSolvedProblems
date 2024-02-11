class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int, int> preSum;
        int cnt = 0;
        int sum = 0;
        for(int i=0; i<n; i++) {
            sum += nums[i];

            if(sum == k) cnt++;
            
            int rem = sum - k;
            if(preSum.find(rem) != preSum.end()) {
                cnt += preSum[rem];
            }

            preSum[sum]++;
        }

        return cnt;
    }
};