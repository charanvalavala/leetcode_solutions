class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int a = 0;
        int b=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]==0)
            {
                a++;
            }
            else{
                nums[b]=nums[i];
                b++;
            }
        }
        while(a>=1)
        {
            nums[n-a]=0;
            a--;
        }
        
    }
};