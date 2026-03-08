class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int a = nums.size();
        int b = 0;
        for(int i =0; i<a; i++)
        {
            b = b^i^nums[i];
        }
        b= b^a;
        return b;
    }
};