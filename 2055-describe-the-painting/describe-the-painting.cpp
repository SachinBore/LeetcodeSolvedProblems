class Solution {
public:
    vector<vector<long long>> splitPainting(vector<vector<int>>& arr) {
        map<long long, long long> mp;
        int n = arr.size();
        for(int i=0; i<n; i++) {
            mp[arr[i][0]] += arr[i][2];
            mp[arr[i][1]] -= arr[i][2];
        }

        long long current = 0;
        int prev = -1;
        vector<vector<long long>> ans;
        for(auto it : mp) {
            if(prev != -1 && current != 0) {
                ans.push_back({prev, it.first, current});
            }

            current += it.second;
            prev = it.first;
        }

        return ans;
    }
};