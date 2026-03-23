class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int n = intervals.size();
        sort(intervals.begin(),intervals.end());
        vector<vector<int>>ans;
        vector<int>tmp;
        tmp.push_back(intervals[0][0]);
        tmp.push_back(intervals[0][1]);
        for(int i=1;i<n;i++)
        {
            if(intervals[i][0]<=tmp[1])
            {
                tmp[1]= max(intervals[i][1],tmp[1]);
            }
            else
            {
                ans.push_back(tmp);
                tmp = intervals[i];
            }
        }
        ans.push_back(tmp);
        return ans;
    }
};