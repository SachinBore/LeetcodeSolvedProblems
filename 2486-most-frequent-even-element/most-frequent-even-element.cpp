class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        map<int, int> mp;

        for(int i=0; i<nums.size(); i++) {
            if(nums[i]%2 == 0) mp[nums[i]]++;
        }

        if(mp.empty() == true) return -1;

        int value = 0;
        int freq = 0;
        for(auto it : mp) {
            if(it.second > freq) {
                value = it.first;
                freq = it.second;
            }
            else if(it.second == freq) {
                value = min(value, it.first);
            }
        }

        return value;
    }
};