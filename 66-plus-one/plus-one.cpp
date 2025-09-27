class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        
        int carry = 0;
        for(int i=digits.size()-1; i>=0; i--) {

            if(i==digits.size()-1) {
                int num = digits[i] + 1;
                if(num == 10) {
                    carry = 1;
                    digits[i] = 0;
                } else digits[i] = num;

                continue;
            }

            int val = digits[i];
            if(carry != 0) {
                val++;
                carry = 0;
            }

            if(val == 10) {
                carry = 1;
                digits[i] = 0;
            } else digits[i] = val;
        }

        if(carry == 1) {
            vector<int> ans = {1};
            ans.insert(ans.end(), digits.begin(), digits.end());
            return ans;
        }

        return digits;
    }
};