class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3,
                     vector<int>& nums4) {
        int n = nums1.size();

        map<long long, int> mp;
        for(int i=0; i<n; i++) {
            for(int j=0; j<n; j++) {
                mp[nums3[i]+nums4[j]]++;
            }
        }

        int ans = 0;
        for(int i=0; i<n; i++) {
            for(int j=0; j<n; j++) {
                long long sum = nums1[i]+nums2[j];
                auto it = mp.find(-1*sum);
                if(it != mp.end()) {
                    ans += it->second;
                }
            }
        }

        return ans;
    }
};