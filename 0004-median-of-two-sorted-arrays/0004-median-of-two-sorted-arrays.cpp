#include <vector>
#include <climits>
using namespace std;

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        
        if (nums1.size() > nums2.size())
            return findMedianSortedArrays(nums2, nums1);

        int m = nums1.size();
        int n = nums2.size();

        int low = 0, high = m;

        while (low <= high) {
            int px = (low + high) / 2;
            int py = (m + n + 1) / 2 - px;

            int leftX  = (px == 0) ? INT_MIN : nums1[px - 1];
            int rightX = (px == m) ? INT_MAX : nums1[px];

            int leftY  = (py == 0) ? INT_MIN : nums2[py - 1];
            int rightY = (py == n) ? INT_MAX : nums2[py];

            if (leftX <= rightY && leftY <= rightX) {
                if ((m + n) % 2 == 0) {
                    return (max(leftX, leftY) + min(rightX, rightY)) / 2.0;
                } else {
                    return max(leftX, leftY);
                }
            }
            else if (leftX > rightY) {
                high = px - 1;
            }
            else {
                low = px + 1;
            }
        }

        return 0.0;
    }
};