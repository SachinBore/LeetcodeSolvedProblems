class Solution {
public:
    void sortColors(vector<int>& arr) {
    
        // using 3 pointers approach, 
        // < left is 0s
        // left to mid-1 is 1s
        // mid to high-1 is our given array
        // high to n-1 is 2s

        int n = arr.size();
        int left = 0;
	    int mid = 0;
	    int right = n - 1;

	    while (mid <= right) {
		    if (arr[mid] == 0) {
			    swap(arr[left], arr[mid]);
			    mid++;
			    left++;
		    } else if (arr[mid] == 1) {
			    mid++;
		    } else {
			    swap(arr[right], arr[mid]);
			    right--;
		    }  
	    }
        
        
    }
};