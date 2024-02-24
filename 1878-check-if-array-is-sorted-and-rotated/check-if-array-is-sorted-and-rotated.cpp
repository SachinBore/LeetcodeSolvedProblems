class Solution {
public:
    bool check(vector<int>& arr) {
        int n = arr.size();
        int change = 0;
        for(int i=0; i<n-1; i++) {
            if(arr[i] > arr[i+1]) change++;
        }
        if(arr[0] < arr[n-1]) change++;

        if(change <= 1) return true;
        else return false;
    }
};