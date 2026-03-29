class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m =nums1.size();
        int n =nums2.size();
        vector<int>ans;
        int left=0;
        int right= 0;
        while(left<m &&right<n)
        {
            if(nums1[left]<=nums2[right])
            {
                ans.push_back(nums1[left]);
                left++;
            }
            else
            {
                ans.push_back(nums2[right]);
                right++;
            }
        }
        while(left<m)
        {
            ans.push_back(nums1[left]);
                left++;
        }
        while(right<n)
        {
            ans.push_back(nums2[right]);
                right++;
        }
        int a = ans.size();
        double val =0;
        if(a%2 !=0) 
        {
            val = ans[a/2];
        }
        else
        {
            val=(ans[a/2]+ans[(a/2)-1])/2.0;
        }
        return val;
    }
};