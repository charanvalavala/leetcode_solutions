class Solution {
public:
    int fib(int n) {
        int a =1;
        int b = 0;
        if(n==1)return a;
        if(n==0)return b;
        int sum = 0;
        for(int i=1;i<n;i++)
        { 
        sum =a +b;
        b=a;
        a=sum;
        }
        return sum;
    }
};