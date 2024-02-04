class Solution {
public:
    void sortColors(vector<int>& arr) {
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