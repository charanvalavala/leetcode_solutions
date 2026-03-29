class Solution:
    def findMaxConsecutiveOnes(self, nums: List[int]) -> int:
        ans =0
        left =0
        for right in range(len(nums)):
            if nums[right]==1:
                left+=1
            else:
                ans = max(ans,left)
                left =0
        ans = max(ans,left)
        return ans
        