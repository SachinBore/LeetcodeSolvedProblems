class Solution {
public:
    long long findHours(vector<int> p, int n, int k) {
        long long hrs = 0;
        for(int i=0; i<n; i++) {
            hrs += ceil(1.0*p[i]/k);
        }

        return hrs;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int n = piles.size();

        int low = 1;
        int high = *max_element(piles.begin(), piles.end());
        int res = -1;
        while(low <= high) {
            int k = low + (high - low)/2;
            long long hrsTaken = findHours(piles, n, k);

            if(hrsTaken <= h) {
                res = k;
                high = k-1;
            } else {
                low = k + 1;
            }
        }

        return res;
    }
};