class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int ans = INT_MAX;
        int diff = INT_MAX;

        sort(nums.begin(), nums.end());
        int n = nums.size();

        for(int i=0; i<n; i++) {
            if(i>0 && nums[i] == nums[i-1]) continue;

            int left = i+1, right = n-1;
            while(left < right) {
                int total = nums[i]+nums[left]+nums[right];
                int curr_diff = abs(target - total);

                int mini = min(diff, curr_diff);
                if(mini == curr_diff) {
                    
                    ans = total;
                    diff = curr_diff;
                }

                if(total < target) {
                    left++;
                } else if(total > target) {
                    right--;
                } else {
                    left++;
                    right--;

                    while(left < n && nums[left] == nums[left-1]) left++;
                    while(right > 0 && nums[right] == nums[right+1]) right--;
                }

                
            }
        }

        return ans;
    }
};