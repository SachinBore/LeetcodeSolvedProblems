class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());

        int n = nums.size();

        vector<vector<int>> ans;
        for(int i=0; i<n; i++) {
            if(i>0 && nums[i] == nums[i-1]) continue;
            for(int j=i+1; j<n; j++) {
                if(j>i+1 && nums[j] == nums[j-1]) continue;

                int left = j+1, right = n-1;

                while(left < right) {
                    long long total = nums[i];
                    total += nums[j] + nums[left];
                    total += nums[right];
                    if(total == target) {
                        ans.push_back({nums[i], nums[j], nums[left], nums[right]});
                        left++;
                        right--;

                        while(left < n && nums[left] == nums[left-1]) left++;
                        while(right > 0 && nums[right] == nums[right+1]) right--;
                    } else if(total < target) {
                        left++;
                    } else right--;
                }
            }
        }

        return ans;
    }
};