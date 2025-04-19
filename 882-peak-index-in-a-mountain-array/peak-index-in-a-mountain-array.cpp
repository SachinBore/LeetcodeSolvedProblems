class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int n = arr.size();
        int left = 0;
        int right = n-1;
        int ans = -1;
        while(left <= right) {
            int mid = left + (right - left)/2;
            if(arr[mid-1] < arr[mid] && arr[mid+1] < arr[mid]) {
                ans = mid;
                break;
            } else if(arr[mid] < arr[mid+1]) {
                left = mid;
            } else {
                right = mid;
            }
        }

        return ans;
    }
};