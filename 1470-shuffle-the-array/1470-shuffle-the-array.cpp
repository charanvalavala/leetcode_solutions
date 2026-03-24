class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int>ans;
        int lo =0;
        int hi = n;
        while(lo<n && hi<2*n)
        {
            ans.push_back(nums[lo]);
            ans.push_back(nums[hi]);
            lo++;
            hi++;

        }
        return ans;
    }
};