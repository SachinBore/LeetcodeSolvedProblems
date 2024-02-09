class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& arr) {

        int n = arr.size();
        int m = arr[0].size();
        vector<int> res;

        int top = 0, bottom = n - 1;
        int left = 0, right = m - 1;

        while (left <= right && top <= bottom) {

            for (int i = left; i <= right; i++) {
                res.push_back(arr[top][i]);
            }
            top++;

            for (int i = top; i <= bottom; i++) {
                res.push_back(arr[i][right]);
            }
            right--;

            if (top <= bottom) {
                for (int i = right; i >= left; i--) {
                    res.push_back(arr[bottom][i]);
                }
                bottom--;
            }
            if (left <= right) {
                for (int i = bottom; i >= top; i--) {
                    res.push_back(arr[i][left]);
                }
                left++;
            }
        }
        return res;
    }
};