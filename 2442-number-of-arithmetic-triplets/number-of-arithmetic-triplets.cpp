class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
        int n = nums.size();

        int ans = 0;
        for(int i=0; i<n; i++) {
            int left = i+1, right = n-1;
            while(left < right) {
                if(nums[left] - nums[i] != diff) {
                    left++;
                    continue;
                }

                if(nums[left] + diff != nums[right]) {
                    right--;
                    continue;
                }

                ans++;
                left++;
                right--;
            }
        }

        return ans;
    }
};