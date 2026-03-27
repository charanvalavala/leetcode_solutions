class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int low =1;
        int n = piles.size();
        int high = INT_MIN;
        for(int i=0;i<n;i++)
        {
            if(piles[i]>high)
            {
            high =piles[i];
            }
        }
        int ans = 0;
        while(low <=high)
        {
            int mid= (low+high)/2;
            long long a =eating(piles,mid);
            if(a<= h )
            {
                ans =mid;
                high = mid-1;
            }
            else
            {
                low = mid+1;
            }
        }
        return ans;
        
    }
    long long eating(vector<int>&piles,int a)
    {
        long long ans =0;
        int n =piles.size();
        for(int i=0;i<n;i++)
        {
            ans += ((piles[i]+a-1)/a);
        }
        return ans;
    }
};