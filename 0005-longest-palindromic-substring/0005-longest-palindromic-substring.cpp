class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.size();
        int fl = 0, fr = 0;

        for (int i = 0; i < n; i++) {
            int l = i, r = i;
            while (l >= 0 && r < n && s[l] == s[r]) {
                if (r - l > fr - fl) {
                    fl = l;
                    fr = r;
                }
                l--;
                r++;
            }

            l = i;
            r = i + 1;
            while (l >= 0 && r < n && s[l] == s[r]) {
                if (r - l > fr - fl) {
                    fl = l;
                    fr = r;
                }
                l--;
                r++;
            }
        }
        return s.substr(fl, fr - fl + 1);
    }
};