class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int>mp;
        int a = nums.size();
        int b = 0;
        for(int i =0; i< a;i++)
        {
           b=  b^nums[i];
        }
        return b;
    }
};