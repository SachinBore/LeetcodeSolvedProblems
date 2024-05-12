class Solution {
public:

    void solve(int idx, vector<int>& nums, vector<int>& curr_sub, vector<vector<int>>& ansWithDup) {
        if(idx == nums.size()) {
            ansWithDup.push_back(curr_sub);
            return;
        }

        solve(idx+1, nums, curr_sub, ansWithDup);

        curr_sub.push_back(nums[idx]);
        solve(idx+1, nums, curr_sub, ansWithDup);
        curr_sub.pop_back();
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> ansWithDup;
        vector<int> curr_sub;

        sort(nums.begin(), nums.end());
        solve(0, nums, curr_sub, ansWithDup);

        set<vector<int>> st;
        for(int i=0; i<ansWithDup.size(); i++) {
            st.insert(ansWithDup[i]);
        }

        vector<vector<int>> final_result;
        for(auto it: st) {
            final_result.push_back(it);
        }

        return final_result;
    }
};