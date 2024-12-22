class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int n = nums.size();

        for(int i=0; i<n; i++) {
            if(nums[i]%2 == 0) nums[i] = 0;
            else nums[i] = 1;
        }

        map<long long, long long> mp;
        int ans = 0;
        int sum = 0;
        mp[0] = 1;
        for(int i=0; i<n; i++) {

            sum += nums[i];

           ans += mp[sum - k];
           mp[sum]++; 
        }

        return ans;
    }
};