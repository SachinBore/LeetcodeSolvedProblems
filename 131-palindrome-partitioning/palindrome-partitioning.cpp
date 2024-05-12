class Solution {
public:
    vector<vector<string>> partition(string s) {
        vector<vector<string>> all;
        vector<string> curr;

        solve(0, s, curr, all);
        return all;
    }

    void solve(int idx, string s, vector<string>& curr, vector<vector<string>>& all) {
        if(idx == s.size()) {
            all.push_back(curr);
            return;
        }

        for(int i=idx; i<s.size(); i++) {
            if(isPalindrome(s, idx, i)) {
                curr.push_back(s.substr(idx, i-idx+1));
                solve(i+1, s, curr, all);
                curr.pop_back();
            }
        }
    }

    bool isPalindrome(string s, int start, int end) {
        while(start <= end) {
            if(s[start] != s[end]) return false;
            start++;
            end--;
        }
        return true;
    }
};