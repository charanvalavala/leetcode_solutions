class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char , char> mpp;
        unordered_map<char , int> freq;
        for( int i = 0; i<s.size(); i++){
            if(mpp.find(s[i]) == mpp.end()){
                if(freq[t[i]] == 1) return false;
                freq[t[i]]++;
                mpp[s[i]] = t[i];
            }
            else{
                if(mpp[s[i]] != t[i]) return false;
            }
        }
        return true;
    }
};