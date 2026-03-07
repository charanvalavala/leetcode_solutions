class Solution {
public:
    int strStr(string haystack, string needle) {
        int a = haystack.length();
        int b = needle.length();
        int i ;
        bool value;
        for(i =0 ; i < a; i++)
        {
            if(haystack[i] == needle[0] )
            {
                value = true;
                for(int j=1;j<b;j++)
                {
                    if(haystack[i+j] != needle[j])
                    {
                        value = false;
                        break;
                    }
                    
                }
                 if(value)
                 {
                    return i;
                 }
               

            }
           
        }
       
        return -1;
    }
};