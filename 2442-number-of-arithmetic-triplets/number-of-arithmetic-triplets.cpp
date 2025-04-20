class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
        int n = nums.size();

        int ans = 0;
        for(int i=0; i<n; i++) {

            map<int, int> mp;
            for(int j=i+1; j<n; j++) {
                
                if(nums[j] - nums[i] != 2*diff) {
                    mp[nums[j]] = 1;
                    continue;
                }

                if(mp.find(nums[j] - diff) != mp.end()) {
                    ans++;
                }

                mp[nums[j]] = 1;
            }
        }

        return ans;
    }
};