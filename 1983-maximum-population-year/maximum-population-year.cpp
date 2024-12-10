class Solution {
public:
    int maximumPopulation(vector<vector<int>>& logs) {
        int n = logs.size();
        vector<int> pre(101, 0);

        for(int i=0; i<n; i++) {
            int birth = logs[i][0] - 1950;
            int death = logs[i][1] - 1950;
            pre[birth]++;
            pre[death]--;
        }

        int maxi = INT_MIN;
        int year;
        for(int i=0; i<101; i++) {
            if(i>0) pre[i] = pre[i-1] + pre[i];

            if(maxi < pre[i]) {
                maxi = pre[i];
                year = 1950 + i;
            }  
        }

        return year;
    }
};