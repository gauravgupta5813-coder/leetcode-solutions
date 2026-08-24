class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int n = arr.size();
        int j = 1;

        while (j < n - 1) {
            int k = j + 1;
            int i = j - 1;
            if (arr[j] >= arr[i] && arr[j] >= arr[k]) {
                return j;
            } else
                j++;
        }
        return 0;
    }
};