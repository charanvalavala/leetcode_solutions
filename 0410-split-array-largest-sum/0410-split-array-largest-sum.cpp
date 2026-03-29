class Solution {
public:
    int splitArray(vector<int>& arr, int k) {
        int n = arr.size();
        if (k> n) return -1;
        int low =arr[0];
        int high =0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]>low)low=arr[i];
            high += arr[i];
        }
        int ans=0;
        while(low<=high)
        {
            int mid = (low+high)/2;
            int a = books(arr,mid);
            if(a<=k)
            {
                ans =mid;
                high = mid-1;
            }
            else
            {
                low =mid+1;
            }
        }
        return ans;
    }
        int books(vector<int> &arr,int mid)
    {
        int n = arr.size();
        int count=0;
        int sum =0;
        for(int i=0;i<n;i++)
        {
            sum += arr[i];
            if(sum > mid)
            {
                count++;
                sum =arr[i];
            }
        }
        if(sum !=0)count +=1;
        return count;
    }
};