class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        unordered_set<int> st;

        for(int i=0; i<nums.size(); i++) {
            st.insert(nums[i]);
        }

        int val = nums[0];
        int idx = 1;
        for(int i=1; i<nums.size(); i++) {
            if(nums[i] != val) {
                nums[idx] = nums[i];
                val = nums[i];
                idx++;
            }
        }

        return st.size();
    }
};