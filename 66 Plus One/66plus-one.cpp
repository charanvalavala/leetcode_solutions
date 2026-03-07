class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int a = digits.size();
        digits[a-1] += 1;
        for(int i = a-1; i >= 0; i--) {
            if(digits[i] == 10) {
                digits[i] = 0;
                if(i == 0) digits.insert(digits.begin(), 1);
                else digits[i-1] += 1;
            }
        }
        return digits;
    }
};