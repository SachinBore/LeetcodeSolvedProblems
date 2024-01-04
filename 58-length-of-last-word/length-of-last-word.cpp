class Solution {
public:
    int lengthOfLastWord(string s) {

        reverse(s.begin(), s.end());

        int cnt = 0;
        for(int i=0; i<s.size(); i++) {
            if(s[i] != ' ') {
                cnt++;
            }

            else if(s[i] == ' ' && cnt != 0) break;
        }

        return cnt;
    }
};