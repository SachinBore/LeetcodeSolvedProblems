class Solution {
public:
    void reverse(int start, int end, vector<int>& nums) {
        while(start<=end) {
            swap(nums[start], nums[end]);
            start++; end--;
        }
    }
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k=k%n;
        reverse(0, n-k-1, nums);
        reverse(n-k, n-1, nums);
        reverse(0, n-1, nums);
    }
};