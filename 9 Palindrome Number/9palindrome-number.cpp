class Solution {
public:
    bool isPalindrome(int x) {
        long num1 = 0;
        int tmp = x;
        if(x < 0)
        {
            return false;
        }
        while(tmp != 0)
        {
            int rem = tmp % 10;
            tmp = tmp/10;
            num1 = num1 *10 +rem;
        }
        if(num1 == x)
        {
            return true;
        }
        return false;
    }
};