class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size();
        int n = nums2.size();

        vector<int> result(m + n);

        for(int i = 0; i < m; i++) {
            result[i] = nums1[i];
        }

        for(int j = 0; j < n; j++) {
            result[m + j] = nums2[j];
        }

        sort(result.begin(), result.end());

        int size = result.size();

        if(size % 2 != 0) {
            return result[size / 2];
        } else {
            return (result[size / 2 - 1] + result[size / 2]) / 2.0;
        }
    }
};