class Solution {
public:
    int lengthOfLastWord(string s) {
        int j = s.length() -1;
        while(j >= 0 && s[j] == ' ')
        {
            j = j-1;
        }
        int a =0;
        while(j >=0  && s[j] != ' ')
        {
            a++;
            j -=1 ;
        }
        return a;
    }
};