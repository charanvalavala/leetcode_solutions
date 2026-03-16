class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int length =0 ;
        int length1 =0;
        int n = nums.size();
        for(int i =0; i<n;i++)
        {
            if(nums[i]==1)
            {
                length+=1;
            }
            if(nums[i]==0)
            {
                if(length > length1)
                {
                length1 = length;
                }
                length = 0;
            }
        }
        if(length > length1)length1 = length;
        return length1;
        
    }
};