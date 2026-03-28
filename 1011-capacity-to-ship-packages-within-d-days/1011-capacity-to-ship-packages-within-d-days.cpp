class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int low = 0;
        int high = 0;
        
        for (int i = 0; i < weights.size(); i++) {
            if (weights[i] > low) {
                low = weights[i];
            }
            high += weights[i];
        }
        
        int ans = -1;
        
        while (low <= high) {
            int mid = low + (high - low) / 2;
            
            if (shipdays(weights, mid) <= days) {
                ans = mid;  
                high = mid - 1;  
            } else {
                low = mid + 1;
            }
        }
        return ans;
    }
    
    int shipdays(vector<int>& weights, int mid) {
        int days_needed = 1;
        int current_load = 0;
        
        for (int i = 0; i < weights.size(); i++) {
            if (current_load + weights[i] > mid) {
                days_needed++;
                current_load = weights[i];
            } else {
                current_load += weights[i];
            }
        }
        
        return days_needed;
    }
};