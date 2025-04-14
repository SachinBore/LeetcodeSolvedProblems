class Solution {
public:
    vector<int> generateRow(int row) {
        vector<int> ans;
        long long res = 1;
        ans.push_back(res);

        for(int i=0; i<row; i++) {
            res = res*(row-i)/(i+1);
            ans.push_back(res);
        }

        return ans;
    }
    vector<int> getRow(int rowIndex) {
        return generateRow(rowIndex);
    }
};