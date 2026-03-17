class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        if (n == 0) return 0;
        
        sort(nums.begin(), nums.end());
        
        int max_count = 1;
        int current_count = 1;
        
        for (int i = 1; i < n; i++) {
            if (nums[i] != nums[i - 1]) {
                if (nums[i] == nums[i - 1] + 1) {
                    current_count++;
                } else {
                    max_count = max(max_count, current_count);
                    current_count = 1;
                }
            }
        }
        
        return max(max_count, current_count);
    }
};