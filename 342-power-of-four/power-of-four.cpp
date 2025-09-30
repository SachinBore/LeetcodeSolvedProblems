class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n<=0) return false;

        // %3 trick
        return ((n&(n-1)) == 0) && (n%3 == 1);
    }
};