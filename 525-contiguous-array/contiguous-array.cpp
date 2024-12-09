class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        map<int, int> mp;
        int ans = 0;
        int sum = 0;
        for(int i=0; i<nums.size(); i++) {
            if(nums[i] == 0) sum--;
            else sum++;

            if(sum == 0) {
                ans = i+1;
            }
            else {
                if(mp.find(sum) != mp.end()) {
                    ans = max(ans,i+1 - mp[sum]);
                } else {
                    mp[sum] = i+1;
                }
            }
        }

        return ans;
    }
};