class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<=0)return false;
        long int i = log2(n);
        if(pow(2,i)==n)return true;
        return false;
    }
};