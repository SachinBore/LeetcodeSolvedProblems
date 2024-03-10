class Solution {
    public int removeDuplicates(int[] nums) {
        
        Set<Integer> st = new LinkedHashSet<>();
        for(int i : nums) {
            st.add(i);
        }

        int idx = 0;
        for(int i : st) {
            nums[idx] = i;
            idx++;
        }

        return st.size();
    }
}