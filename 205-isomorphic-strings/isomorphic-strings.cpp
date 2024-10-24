class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, int> smap;
        unordered_map<char, int> tmap;

        int n = s.size();

        for(int i=0; i<n; i++) {
            if(smap[s[i]] != tmap[t[i]]) return false;

            smap[s[i]] = i+1;
            tmap[t[i]] = i+1;
        }

        return true;
    }
};