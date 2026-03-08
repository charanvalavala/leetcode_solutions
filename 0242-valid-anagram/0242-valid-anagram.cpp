class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char,int>mp1,mp2;
        for(int i =0,j=s.size();i<j;i++)
        {
            mp1[s[i]]++;
        }
        for(int i =0,j=t.size();i<j;i++)
        {
            mp2[t[i]]++;
        }
        if(mp1==mp2)return true;
        return false;
    }
};