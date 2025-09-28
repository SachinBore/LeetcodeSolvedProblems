class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=m-1, j=n-1;
        int indx = m+n-1;

        while(j>=0) {
            if(i>=0 && nums1[i] >= nums2[j]) {
                nums1[indx] = nums1[i];
                i--; indx--;
            } else {
                nums1[indx] = nums2[j];
                j--; indx--;
            }
        }
    }
};