class Solution {
public:
    int singleNonDuplicate(vector<int>& arr) {
        
        int low = 0;
        int high = arr.size()-1;
        int mid = -1;
        while(low<=high) {
            mid = low + (high - low)/2;

            if(mid == arr.size() - 1) {
                return arr[mid];
            }

            if(mid > 0 && mid < arr.size()-1 && arr[mid] != arr[mid-1] && arr[mid] != arr[mid+1]) {
                return arr[mid];
            }

            if(mid%2 == 0) {
                // even
                if(arr[mid] == arr[mid+1]) {
                    low = mid+1;
                } else {
                    high = mid-1;
                }
            } else {
                // odd
                if(arr[mid] == arr[mid+1]) {
                    high = mid-1;
                } else {
                    low = mid+1;
                }
            }
        }

        return arr[mid];
    }
};