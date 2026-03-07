class Solution {
public:
    string addBinary(string a, string b) {
        string s;
        int x = a.length()-1 ;
        int y = b.length()-1 ;
        int carry =0;
        while(x >= 0 || y>= 0 || carry)
        {
            int sum = carry;
            if(x>=0){sum = sum + (a[x])-'0';x--;}
            if(y>=0){sum = sum + (b[y])-'0';y--;}
            carry = sum/2;
            s += (char)('0'+sum%2);
            
            
        }
        reverse(s.begin(),s.end());
        return s;
    }
};