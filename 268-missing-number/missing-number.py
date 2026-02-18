class Solution:
    def missingNumber(self, nums: List[int]) -> int:
        n= len(nums)
        total =(n*(n+1))/2
        sum = 0
        for i in range(0,n):
            sum += nums[i]
        return int(total-sum)