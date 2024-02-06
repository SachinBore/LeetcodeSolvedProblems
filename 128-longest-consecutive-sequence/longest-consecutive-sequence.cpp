class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        if(n <= 1) return n;

        int longest = 1;
        unordered_set<int> st;
        for(int i=0; i<n; i++) {
            st.insert(nums[i]);
        }

        for(auto it : st) {
            if(st.find(it - 1) == st.end()) {
                int cnt = 1;
                int value = it;
                while(st.find(value+1) != st.end()) {
                    cnt++;
                    value++;
                }
                longest = max(longest, cnt);
            }
        }
        return longest;
    }
};