class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs[0].size();

        string ans;
        for(int i=0; i<n; i++) {
            bool flag = true;
            char ch = strs[0][i];
            for(int j=0; j<strs.size(); j++) {
                if(strs[j].size() < i || strs[j][i] != ch) {
                    flag = false;
                    break;
                }
            }

            if(flag) {
                ans = strs[0].substr(0, i+1);
            } else break;
        }

        return ans;
    }
};