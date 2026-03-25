class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        return binary(nums,0,n-1,target);
    }

    int binary(vector<int>& nums,int low,int high, int target)
    {
        if (low>high)return -1;
        int mid = (low+high)/2;
        if(nums[mid]==target)return mid;
        if(nums[mid] > target)
        {
            return binary(nums,low,mid-1,target);
        }
        else
        {
            return binary(nums,mid+1,high,target);
        }
    }
};