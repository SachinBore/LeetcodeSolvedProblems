class Solution {
public:
    char findTheDifference(string s, string t) {
        map<char, int> mp;
        for(int i=0; i<s.size(); i++) {
            mp[s[i]]++;
            mp[t[i]]--;
        }

        mp[t[t.size()-1]]--;

        char ans;
        for(auto it : mp) {
            if(it.second != 0) {
                ans = it.first;
                break;
            }
        }

        return ans;
    }
};