class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        mini = prices[0]
        max_profit =0
        for num in prices:
            if num < mini:
                mini = num
            max_profit = max(max_profit,num-mini)
        return max_profit
        