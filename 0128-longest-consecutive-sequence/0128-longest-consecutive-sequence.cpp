class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        if(n==0)return 0;
        unordered_set<int>st;
        int longest = 1;
        for(int i =0;i<n;i++)
        {
            st.insert(nums[i]);
        }

        for(auto it: st)
        {
            int count=1;
            if(st.find(it-1)==st.end())
            {
                while(st.find(it+1) != st.end())
                {
                    it = it+1;
                    count++;
                }
                longest = max(longest,count);
            }
        }
        return longest;
    }
};