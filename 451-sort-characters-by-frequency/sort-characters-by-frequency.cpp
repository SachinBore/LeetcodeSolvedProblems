class Solution {
public:
    static bool compare(pair<char, int> p1, pair<char, int> p2) {
        return p1.second > p2.second;
    }

    string frequencySort(string s) {
        int n = s.size();
        vector<pair<char, int>> vp;
        map<char, int> mp;
        for(int i=0; i<n; i++) {
            mp[s[i]]++;
        }

        for(auto it : mp) {
            vp.push_back({it.first, it.second});
        }

        sort(vp.begin(), vp.end(), compare);

        string ans="";
        for(auto it : vp) {
            for(int i=0; i<it.second; i++) {
                ans += it.first;
            }
        }

        return ans;
    }
};