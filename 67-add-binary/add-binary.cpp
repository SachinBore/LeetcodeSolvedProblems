class Solution {
public:
    string addBinary(string a, string b) {
        reverse(a.begin(), a.end());
        reverse(b.begin(), b.end());

        string ans;
        char carry = '0';
        for (int i = 0; i < max(a.size(), b.size()); i++) {
            int cnt = 0;
            if (carry == '1')
                cnt++;
            if (i < a.size() && a[i] == '1')
                cnt++;
            if (i < b.size() && b[i] == '1')
                cnt++;

            if (cnt & 1) {
                ans += '1';
            } else {
                ans += '0';
            }

            if (cnt > 1)
                carry = '1';
            else
                carry = '0';
        }

        if (carry == '1') {
            ans += '1';
        }

        reverse(ans.begin(), ans.end());
        return ans;
    }
};