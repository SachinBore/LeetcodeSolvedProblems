class Solution {
public:
    int longestConsecutive(vector<int>& arr) {
        sort(arr.begin(), arr.end());

        int n = arr.size();

        if(n <= 1) return n;

        int longest = 1;
        int cnt = 1;
        for(int i=1; i<n; i++) {
            if(arr[i] == arr[i-1]) continue;
            if(arr[i] == arr[i-1]+1) {
                cnt++;
                longest = max(longest, cnt);
            } else cnt = 1;
        }

        return longest;
    }
};