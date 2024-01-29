class Solution {
public:
    bool check(vector<int>& arr) {
        int change = 0;
        int n = arr.size();
        for(int i=1; i<n; i++) {
            if(arr[i-1] > arr[i]) change++;
        }
        if(arr[n-1] > arr[0]) change++;

        if(change <= 1) return true;
        return false;
    }
};