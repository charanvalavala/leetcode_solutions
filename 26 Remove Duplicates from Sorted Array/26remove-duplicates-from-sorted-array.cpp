class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k=1 ;
        for(int i=0,j = nums.size()-1; i<j;i++)
        {
            if(nums[i] != nums[i+1])
            {
                nums[k] = nums[i+1];
                k++;
            }
        }
        return k;
    }
};