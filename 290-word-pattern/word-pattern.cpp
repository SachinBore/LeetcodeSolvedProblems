class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector<string> result;
        stringstream ss(s);
        string word;
        while (ss >> word)
            result.push_back(word);

        int n = pattern.size();

        if(n != result.size()) return false;

        map<char, string> mp;
        set<string> st;
        for(int i=0; i<n; i++) {
            if(mp.find(pattern[i]) != mp.end()) {
                if(mp[pattern[i]] != result[i]) return false;
            } else {
                if(st.count(result[i]) > 0) return false;

                mp[pattern[i]] = result[i];
                st.insert(result[i]);
            }
        }
        
        return true;
    }
};