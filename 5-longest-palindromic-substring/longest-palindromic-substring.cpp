class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.size();
        int start = 0, len = 1;

        for(int i=1; i<n; i++) {
            int i1 = i, j1 = i;

            // odd length
            while(i1-1>=0 && j1+1<=n && s[i1-1] == s[j1+1]) {
                i1--; j1++;
            }

            if(j1-i1+1 > len) {
                len = j1-i1+1;
                start = i1;
            }

            // even length
            i1 = i, j1=i-1;
            while(i1-1>=0 && j1+1<=n && s[i1-1] == s[j1+1]) {
                i1--; j1++;
            }

            if(j1-i1+1 > len) {
                len = j1-i1+1;
                start = i1;
            }
        }

        return s.substr(start, len);
    }
};