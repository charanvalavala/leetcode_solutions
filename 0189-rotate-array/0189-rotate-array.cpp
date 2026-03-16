class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n;
        auto it = nums.begin() + k;
        reverse(nums.begin(),nums.end());
        reverse(nums.begin(),it);
        reverse(it,nums.end());
    }
};