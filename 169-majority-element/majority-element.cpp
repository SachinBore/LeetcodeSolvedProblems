class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> mp;
        for(int i=0; i<n; i++) {
            mp[nums[i]]++;
        }
        int res = 0;
        for(auto it: mp) {
            if(it.second > n/2) res = it.first;
        }
        return res;
    }
};