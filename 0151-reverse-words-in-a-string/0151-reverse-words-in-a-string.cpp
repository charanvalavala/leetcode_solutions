class Solution {
public:
    string reverseWords(string s) {
        reverse(s.begin(), s.end());
        int n = s.size();
        int left = 0;

        for (int i = 0; i < n; i++) {
            if (s[i] == ' ') {
                reverse(s.begin() + left, s.begin() + i);
                left = i + 1;
            }
        }
        reverse(s.begin() + left, s.end());

        left = 0;
        int spacethere = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] != ' ') {
                if (spacethere && left > 0) {
                    s[left] = ' ';
                    left++;
                }
                spacethere = 0;
                s[left] = s[i];
                left++;
            } else {
                spacethere = 1;
            }
        }

        return s.substr(0, left);
    }
};