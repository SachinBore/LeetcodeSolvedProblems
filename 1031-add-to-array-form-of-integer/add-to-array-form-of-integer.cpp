class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        
        vector<int> res;
        
        int carry = 0;
        int idx = num.size()-1;
        int value;
        while(idx >=0 || k>0) {
            if(idx < 0) value = 0;
            else value = num[idx];
            int current = value + k%10 + carry;
            if(current <= 9) {
                res.push_back(current);
                carry = 0;
            }
            else {
                res.push_back(current%10);
                carry = 1;
            }
            k = k/10;
            idx--;
        }
        // for(int i=num.size()-1; i>=0; i--) {
        //     int current = num[i] + k%10 + carry;
        //     if(current <= 9) {
        //         res.push_back(current);
        //         carry = 0;
        //     }
        //     else {
        //         res.push_back(current%10);
        //         carry = 1;
        //     }
        //     k = k/10;
        // }

        if(carry == 1) res.push_back(1);

        reverse(res.begin(), res.end());
        return res;
    }
};