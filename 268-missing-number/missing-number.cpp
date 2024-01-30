class Solution {
public:
    int missingNumber(vector<int>& nums) {
        
        map<int, bool> mp;
        int n = nums.size();
        for(int i=0; i<n; i++) {
            mp[nums[i]] = true;
        }

        int ans;
        for(int i=0; i<=n; i++) {
            if(mp[i] == false) {
                ans = i;
                break;
            }
        }

        return ans;
    }
};