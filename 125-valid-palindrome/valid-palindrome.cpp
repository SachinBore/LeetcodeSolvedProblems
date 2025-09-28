class Solution {
public:
    bool isPalindrome(string s) {
        int n = s.size();

        string str;
        for(int i=0; i<n; i++) {
            char ch = tolower(s[i]);

            if((ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9')) {
                str += ch;
            }
        }

        int start = 0, end = str.size() - 1;
        while(start < end) {
            if(str[start] != str[end]) {
                return false;
            }

            start++;
            end--;
        }

        return true;
    }
};