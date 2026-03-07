class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k =0;
        for(int i =0, j= nums.size(); i<j;i++)
        {
            if(nums[i] != val)
            {
                nums[k] = nums[i];
                k++;
            }
        }
        return k;
    }
};