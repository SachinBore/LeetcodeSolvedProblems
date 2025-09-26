class Solution {
public:
    bool isPalindrome(int x) {

        int tmp = x;
        long long ans = 0;
        while(tmp>0) {
            int rem = tmp%10;
            ans = ans*10 + rem;
            tmp/=10;
        }

        return x==ans;
    }
};