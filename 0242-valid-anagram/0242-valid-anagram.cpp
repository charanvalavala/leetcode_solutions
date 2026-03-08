class Solution {
public:
    bool isAnagram(string s, string t) {
        int array[26]={0};
        for(int i=0,j=s.size();i<j;i++)
        {
            array[s[i]-'a']++;
        }
        for(int i=0,j=t.size();i<j;i++)
        {
            array[t[i]-'a']--;
        }
        for(int i=0;i<26;i++)
        {
            if(array[i] != 0){return false;};
        }
        return true;
    }
};