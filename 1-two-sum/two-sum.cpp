class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        unordered_map<int, int> mp;

        vector<int> ans;

        for(int i=0; i<n; i++) {

            int remaining = target - nums[i];
            if(mp.find(remaining) != mp.end()) {
                ans.push_back(mp[remaining]);
                ans.push_back(i);
                break;
            } else {
                mp[nums[i]] = i;
            }
        }

        return ans;
    }
};