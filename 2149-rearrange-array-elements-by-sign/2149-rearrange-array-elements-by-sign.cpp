class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>ans;
        int n = nums.size();
        int p =0;
        int ne =0;
        while(p<n && ne <n )
        {
            while(p<n && nums[p]<0)
            {
                p++;
            }
            if(p<n)
            {
                ans.emplace_back(nums[p]);
                p++;
            }
            while(ne<n && nums[ne]>0 )
            {
                ne++;
            }
            if(ne<n){
                ans.emplace_back(nums[ne]);
                ne++;
            }
        }
        return ans;
    }
};