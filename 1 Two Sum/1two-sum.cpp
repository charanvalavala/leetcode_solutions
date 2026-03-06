class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>mp;
        for(int i=0,j = nums.size(); i < j;i++)
        {
            int num1 = target - nums[i];
                auto it = mp.find(num1);
                if(it != mp.end())
                {
                    return{i,it->second};
                }
            
            mp[nums[i]]=i;
        }
        return{};
    }
};