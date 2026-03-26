class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        return binsearch(nums,0,n-1,target);
    }

    int binsearch(vector<int>& nums, int low, int high,int target)
    {
        if(low>high)return -1;
        int mid = (low+high)/2;
        if(nums[mid]==target)return mid;
        int max1=-1;
        int max2=-1;
        max1=binsearch(nums,low,mid-1,target);
        max2=binsearch(nums,mid+1,high,target);
        return max(max1,max2);
        
        
    }
};