class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        
        int ans = 0;
        int n = nums.size();

        for(int i=0; i<32; i++) {
            // it stores the result bit when we do xor on that particular index bit
            int b = 0; 
            for(int j=0; j<n; j++) {
                if(((nums[j]>>i)&1)==1) {
                    b = b^1;
                }
            }

            // Ith bit of k is same as resultant bit b, then we dont need to flip
            // if not same then we need to flip, so we increase count.
            if(((k>>i)&1) != b) {
                ans++;
            }
        }

        return ans;
    }
};