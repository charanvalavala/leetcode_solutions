class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>positives;
        vector<int>negatives;
        vector<int>ans;
        int n = nums.size();
        for(int i=0;i<n;i++)
        {
            if(nums[i]>0)
            {
                positives.emplace_back(nums[i]);
            }
            else{
                negatives.emplace_back(nums[i]);
            }
        }
        int a = positives.size();
        int i=0;
        int j = 0;
        while(i<a)
        {
            ans.emplace_back(positives[i]);
            ans.emplace_back(negatives[j]);
            i++;
            j++;
        }
        return ans;
    }
};