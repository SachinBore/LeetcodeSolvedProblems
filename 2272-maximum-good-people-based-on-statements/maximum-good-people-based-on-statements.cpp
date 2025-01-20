class Solution {
public:
    int maximumGood(vector<vector<int>>& statements) {
        int n = statements.size();

        int ans = 0;
        for(int mask=0; mask<(1<<n); mask++) {
            bool flag = true;
            for(int i=0; i<n; i++) {
                if((mask & (1<<i)) == 0) continue;
                for(int j=0; j<n; j++) {
                    int good = (mask & (1<<j) ? 1 : 0);
                    if((statements[i][j]==1 && good==0) || (statements[i][j]==0 && good==1)) {
                        flag = false;
                        break;
                    }
                }

                if(flag == false) break;
            }

            if(flag == true) {
                ans = max(ans, __builtin_popcount(mask));
            }
        }

        return ans;
    }
};