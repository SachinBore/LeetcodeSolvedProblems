class Solution {
public:
    long long maximumHappinessSum(vector<int>& h, int k) {
        
        sort(h.begin(), h.end(), greater<int>());
        long long sum = 0;
        int elecnt = 0;
        
        for(int i=0; i<k; i++) {
            if(h[i]-1*elecnt > 0) {
                sum = sum + h[i]-1*elecnt;
                elecnt++;
            }
        }
        
        return sum;
    }
};