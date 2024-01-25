class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {

        string res = "";
        for(int i=0; i<strs[0].size(); i++) {

            bool flag = false;
            char ch = strs[0][i];

            for(int j=0; j<strs.size(); j++) {
                if(ch != strs[j][i]) flag = true;
            }

            if(flag) break;
            else res += ch;
        }

        return res;
    }
};