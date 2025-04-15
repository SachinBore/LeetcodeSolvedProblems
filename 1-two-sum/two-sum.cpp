class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       
        int n = nums.size();
        vector<vector<int>> ele;
        for(int i=0; i<n; i++) {
            ele.push_back({nums[i], i});
        }

        sort(ele.begin(), ele.end(), [](const vector<int>& a, const vector<int>& b) {
            return a[0] < b[0];
        });

        int left = 0, right = n-1;
        while(left < right) {
            int summ = ele[left][0] + ele[right][0];
            if(summ == target) {
                return {ele[left][1], ele[right][1]};
            }
            else if(summ < target) left++;
            else right--;
        }

        return {-1, -1};
    }
};