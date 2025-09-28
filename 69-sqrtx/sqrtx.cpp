class Solution {
public:
    int mySqrt(int x) {
        int low=1, high=INT_MAX;

        int ans;
        while(low <= high) {
            long long mid = low + (high - low)/2;

            if(mid*mid == x) {
                ans = mid;
                break;
            } else if(mid*mid < x) {
                ans = mid;
                low = mid+1;
            } else {
                high = mid-1;
            }
        }

        return ans;
    } 
};