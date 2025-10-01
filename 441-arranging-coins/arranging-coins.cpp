class Solution {
public:
    int arrangeCoins(int n) {

        int l=1, h=n;
        int ans;

        while(l<=h) {
            long long mid = l + (h-l)/2;
            
            long long sum = mid*(mid+1)/2;

            if (sum == n) {
                ans = mid;
                break;
            }
            else if(sum < n) {
                ans = mid;
                l = mid+1;
            } else h = mid-1;
        }

        return ans;
    }
};