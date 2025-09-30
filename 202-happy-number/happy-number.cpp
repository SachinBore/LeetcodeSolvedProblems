class Solution {
public:
    int next(int n) {
        int ans = 0;

        while(n>0) {
            int rem = n%10;
            ans += rem*rem;
            n /= 10;
        }

        return ans;
    }
    bool isHappy(int n) {
        if (n == 1 || n == 7)
            return true;

        while (true) {
            n = next(n);
            if(n==1 || n==7) return true;
            else if(n<10) return false;
        }

        return false;
    }
};