class Solution {
public:
    void sortColors(vector<int>& nums) {
        map<int,int>mp;
        int n = nums.size();
        for(int i=0;i<n;i++)
        {
            mp[nums[i]]++;
        }
        int i =0;
        for(auto it : mp)
        {
            while(it.second>0)
            {
                nums[i]=it.first;
                i++;
                it.second--;
            }
        }

    }
};