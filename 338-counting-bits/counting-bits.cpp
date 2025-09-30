class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ans(n+1, 0);

        for(int i=1; i<=n; i++) {
            int cnt = 0;
            for(int bit = 0; bit<32; bit++) {
                if((1<<bit) > i) break;

                if((i>>bit)&1) cnt++;
            }

            ans[i] = cnt;
        }

        return ans;
    }
};