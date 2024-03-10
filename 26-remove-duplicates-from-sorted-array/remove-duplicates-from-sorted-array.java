class Solution {
    public int removeDuplicates(int[] nums) {
        
        // using 2 pointer approach
        int i = 0;
        for(int j=1; j<nums.length; j++) {
            if(nums[i] != nums[j]) {
                nums[i+1] = nums[j];
                i++;
            }
        }

        return i+1;
    }
}