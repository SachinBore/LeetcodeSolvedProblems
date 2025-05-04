class Solution {
public:
    string frequencySort(string s) {
        int n = s.size();

        unordered_map<char, int> mp;
        for(auto ch : s) mp[ch]++;

        vector<vector<char>> bucket(n+1);
        for(auto [ch, cnt] : mp) {
            bucket[cnt].push_back(ch);
        }

        string ans = "";
        for(int i=n; i>=1; i--) {
            for(int j=0; j<bucket[i].size(); j++) {
                ans.append(i, bucket[i][j]);
            }
        }

        return ans;
        // bucket sort
        // TC : O(n)
        /* nlogn or n for frequency + O(k) for filling bucket : k-disticnt elements + 2N looping over bucker and buliding ans string*/
        // SC : O(n)
    }
};