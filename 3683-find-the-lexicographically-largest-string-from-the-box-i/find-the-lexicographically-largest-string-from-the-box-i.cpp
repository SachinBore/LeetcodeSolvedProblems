class Solution {
public:
    string answerString(string word, int num) {
        if(num == 1) return word;
        int n = word.size();
        int len = n - num + 1;
        string mx = "";
        for(int i=0; i<n; i++) {
            string str;
            bool large = false;
            for(int j=i; j<min(n, i + len); j++) {
                str.push_back(word[j]);

                if(large) {
                    mx.push_back(word[j]);
                    continue;
                }

                if(str.back() > mx[str.size() - 1] || str.size() > mx.size()) {
                    mx = str;
                    large = 1;
                }

                if(str.back() < mx[str.size() - 1]) {
                    break;
                }
            }
        }

        return mx;
    }
};