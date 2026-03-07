class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max =0;
        int a = prices[0];
        for(int i=0,j =prices.size(); i<j;i++)
        {
            
            if(a > prices[i]){a=prices[i];}
            int max1 = prices[i]-a;
            if (max1 > 0 && max1>max){max=max1;}
        }
        return max;
    }
};