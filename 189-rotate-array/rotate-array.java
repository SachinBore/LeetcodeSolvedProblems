class Solution {
    public void rotate(int[] nums, int k) {
        int n = nums.length;
        k = k%n;
        k = n - k;

        reverse(nums, 0, k);
        reverse(nums, k, n);
        reverse(nums, 0, n);
    }

    public void reverse(int[] arr, int start, int end) {
        int tmp;
        end--;
        while(start < end) {
            tmp = arr[start];
            arr[start] = arr[end];
            arr[end] = tmp;
            start++;
            end--;
        }
    }
}