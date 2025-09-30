class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) return false;

        map<char, int> smp, tmp;
        for(int i=0; i<s.size(); i++) {
            smp[s[i]]++;
            tmp[t[i]]++;
        }

        int cnt = 0;
        for(auto it : smp) {
            if(tmp.find(it.first) != tmp.end()) {
                if(it.second != tmp[it.first]) return false;
                else cnt += it.second;
            } else return false;
        }

        return cnt == s.size();
    }
};