class Solution {
public:
    int maxProfit(vector<int>& arr) {
        int n = arr.size();
        int maxProfit = 0;
        int tmpProfit = 0;
        int startElement = arr[0];
        for(int i=0; i<n; i++) {
            if(startElement <= arr[i]) {
                tmpProfit = arr[i] - startElement;
            } else {
                startElement = arr[i];
            }
            maxProfit = max(maxProfit, tmpProfit);
        }

        return maxProfit;
    }
};