class Solution {
public:
    vector<int> majorityElement(vector<int>& arr) {

        int n = arr.size();
        int cnt1 = 0, cnt2 = 0;
	    int el1 = INT_MIN, el2 = INT_MIN;

	    for (int i = 0; i < n; i++) {
		    if (cnt1 == 0 && arr[i] != el2) {
			    cnt1 = 1;
			    el1 = arr[i];
		    }
		    else if (cnt2 == 0 && arr[i] != el1) {
			    cnt2 = 1;
			    el2 = arr[i];
		    }
		    else if (el1 == arr[i]) cnt1++;
		    else if (el2 == arr[i]) cnt2++;
		    else {
			    cnt1--;
			    cnt2--;
		    }
	    }

	    vector<int> res;
	    cnt1 = 0, cnt2 = 0;
	    int mini = n / 3 + 1;

	    for (int i = 0; i < n; i++) {
		    if (el1 == arr[i]) cnt1++;
		    if (el2 == arr[i]) cnt2++;
	    }

	    if (cnt1 >= mini) res.push_back(el1);
	    if (cnt2 >= mini) res.push_back(el2);

	    sort(res.begin(), res.end());

        return res;
    }
};