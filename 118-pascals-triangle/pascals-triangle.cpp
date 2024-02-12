class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        int res = 1;
        for(int r=1; r<=numRows; r++) {
            res = 1;
            vector<int> tmp;
            tmp.push_back(res);
            for(int c=1; c<r; c++) {
                res = res*(r - c);
                res = res/c;
                tmp.push_back(res);
            }
            ans.push_back(tmp);
        }

        return ans;
    }
};