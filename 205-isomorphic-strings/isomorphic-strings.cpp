class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int n = s.size();

        map<char, int> smp;
        map<char, int> tmp;
        bool ans = true;
        for(int i=0; i<n; i++) {
            if(smp.find(s[i]) != smp.end() && tmp.find(t[i]) != tmp.end()) {
                if(smp[s[i]] != tmp[t[i]]) {
                    ans = false;
                    break;
                }
            } else if(smp.find(s[i]) == smp.end() && tmp.find(t[i]) == tmp.end()) {
                smp[s[i]] = i+1;
                tmp[t[i]] = i+1;
            } else {
                ans = false;
                break;
            }
        }

        return ans;
    }
};