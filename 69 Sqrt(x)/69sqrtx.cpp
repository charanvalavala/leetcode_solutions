class Solution {
public:
    int mySqrt(int x) {
        long long first =0,last =x,mid;
        long long ans;
        while(first <= last )
        {
            mid = (first+last)/2;
            if(mid*mid <= x)
            {
                ans = mid;
                first = mid+1;     
            }
            else
            {
                last=mid-1;
            }
        }
        return ans;
    }
};