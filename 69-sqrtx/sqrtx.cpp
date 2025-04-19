class Solution {
public:
    bool check(int i, int x) {
        return 1ll*i*i <= x;
    }

    int mySqrt(int x) {
        int ans = 0;
        for(int i=1; i<=x; i++) {
            if(check(i, x)) {
                ans = i;
            } else break;
        }

        return ans;
    }
};