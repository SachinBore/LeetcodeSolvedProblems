class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int sz = s.size();

        map<char, int> smp;
        map<char, int> tmp;

        for(int i=0; i<sz; i++) {
            if(smp.find(s[i]) != smp.end() && tmp.find(t[i]) != tmp.end()) {
                if(smp[s[i]] != tmp[t[i]]) {
                    return false;
                }
            } else if(smp.find(s[i]) == smp.end() && tmp.find(t[i]) == tmp.end()) {
                smp[s[i]] = i+1;
                tmp[t[i]] = i+1;
            } else {
                return false;
            }
        }

        return true;
    }
};