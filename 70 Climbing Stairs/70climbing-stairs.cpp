class Solution {
public:
    int climbStairs(int n) {
        if(n == 1)return 1;
        if(n == 2)return 2;  
        int x = 1;
        int y =2;
        int a =0 ;
        for(int i=3;i <=n;i++)
        {
            a = x+y;
            x =y;
            y = a;
        }
        return a;
    }
};