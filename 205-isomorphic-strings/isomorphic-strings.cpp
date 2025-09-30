class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int sz = s.size();

        map<char, int> smp;
        map<char, int> tmp;

        for(int i=0; i<sz; i++) {
            if(smp.find(s[i]) != smp.end()) {
                if(tmp.find(t[i]) != tmp.end() && tmp[t[i]] == smp[s[i]]) {
                    continue;
                } else {
                    return false;
                }
            } else {
                if(tmp.find(t[i]) == tmp.end()) {
                    smp[s[i]] = i;
                    tmp[t[i]] = i;
                } else {
                    return false;
                }
            }
        }

        return true;
    }
};