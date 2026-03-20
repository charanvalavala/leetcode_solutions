class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int>ans;
        int n= nums.size();
        int count1=0;
        int count2=0;
        int el1 = INT_MIN;
        int el2 =INT_MIN;
        for(int i=0;i<n;i++)
        {
            if(count1 == 0 && nums[i] != el2)
            {
                count1=1;
                el1=nums[i];
            }
            else if(count2 == 0 && nums[i] != el1)
            {
                count2=1;
                el2=nums[i];
            }
            else if(nums[i]==el1)count1++;
            else if(nums[i]==el2)count2++;
            else{
                count1--;
                count2--;
            }
        }

        int a = int(n/3)+1;
        int cnt1=0;
        int cnt2=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]==el1)cnt1++;
            else if(nums[i]==el2)cnt2++;
        }
        if(cnt1 >=a)ans.push_back(el1);
        if(cnt2 >=a)ans.push_back(el2);
        return ans;
    }
};