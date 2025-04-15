class Solution {
public:
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        int rotations = 4;
        int n = mat.size();
        for (int rotate = 0; rotate < rotations; rotate++) {

            if (rotate > 0) {
                for (int i = 0; i < n; i++) {
                    for (int j = i; j < n; j++) {
                        swap(mat[i][j], mat[j][i]);
                    }
                }

                for (int i = 0; i < n; i++) {
                    reverse(mat[i].begin(), mat[i].end());
                }
            }

            bool match = true;
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                    if (target[i][j] == mat[i][j])
                        continue;
                    else {
                        match = false;
                        break;
                    }
                }
            }

            if (match)
                return true;
        }

        return false;
    }
};