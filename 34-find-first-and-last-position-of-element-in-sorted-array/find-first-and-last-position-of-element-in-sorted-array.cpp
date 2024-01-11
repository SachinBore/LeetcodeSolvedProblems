class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        
        vector<int> res;

        if(binary_search(nums.begin(), nums.end(), target) == true) {
            res.push_back(lower_bound(nums.begin(), nums.end(), target) - nums.begin());
            res.push_back(upper_bound(nums.begin(), nums.end(), target) - nums.begin() - 1);
        } else {
            res.push_back(-1);
            res.push_back(-1);
        }

        return res;
    }
};