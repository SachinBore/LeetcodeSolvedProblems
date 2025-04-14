class Solution {
public:
    vector<int> generateRow(int row) {
        vector<int> rowans;
        int res = 1;
        rowans.push_back(res);
        for(int i=1; i<row; i++) {
            res =  res*(row-i)/i;
            rowans.push_back(res);
        }

        return rowans;
    }
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> triangle;

        for(int i=1; i<=numRows; i++) {
            triangle.push_back(generateRow(i));
        }

        return triangle;
    }
};