class Solution {
public:
    bool repeatedSubstringPattern(string s) {

        int n = s.size();

        for(int k = 1; k <= n/2; k++) {
            if(n % k != 0) continue;

            string sub = s.substr(0, k);
            string temp = "";

            int repeat = n / k;

            for(int i = 0; i < repeat; i++) {
                temp += sub;
            }

            if(temp == s) return true;
        }

        return false;
    }
};