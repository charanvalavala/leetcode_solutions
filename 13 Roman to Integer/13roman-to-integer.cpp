class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char,int>mp = {
            {'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}
        };
        int sum = 0;
        int j= s.length()-1;
        for(int i=0;i<j;i++)
        {
            auto it = mp.find(s[i]);
            auto it1 = mp.find(s[i+1]);
            int a = it->second;
            int b = it1->second;
            if(a < b)
            {
                sum -= a;
            }
            else
            {
                sum +=a;
            }
        }
        sum += (mp.find(s[s.length()-1]))->second;
        return sum;
    }
};