class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int n = nums.size();
        int maxi = nums[0];
        for(int i=0;i<n;i++)
        {
            if(nums[i]>maxi)maxi=nums[i];
        }
        int low =1;
        int high = maxi;
        int ans = -1;
        while(low<=high)
        {
            int mid=low + (high-low)/2;
            if(checkdiv(nums,mid,threshold))
            {
                ans = mid;
                high = mid-1;
            }
            else
            {
                low=mid+1;
            }
            
        }
        return ans;
    }

    bool checkdiv(vector<int>& nums, int mid,int threshold)
    {
        int n = nums.size();
        int ans =0;
        for(int i=0;i<n;i++)
        {
            ans += (nums[i]+mid-1)/mid;
        }
        if(ans <= threshold)return true;
        return false;
    }
};