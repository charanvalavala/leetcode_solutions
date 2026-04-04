class Solution {
public:
    bool rotateString(string s, string goal) {
        int n = s.size();
        if(n != goal.size())return false;
        for(int i=0;i<n;i++)
        {
            string tmp =s;
            reverse(tmp.begin(),tmp.end());
            reverse(tmp.begin(),tmp.begin()+i);
            reverse(tmp.begin()+i,tmp.end());
            if(tmp == goal)return true;
        }
        return false;
    }
};