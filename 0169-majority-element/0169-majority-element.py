class Solution:
    def majorityElement(self, nums: List[int]) -> int:
        n = len(nums)
        count =0
        maj_ele =nums[0]
        for num in nums:
            if count ==0:
                maj_ele =num
                count =1
            elif num == maj_ele:
                count+=1
            else:
                count-=1
        
        
        return maj_ele

        