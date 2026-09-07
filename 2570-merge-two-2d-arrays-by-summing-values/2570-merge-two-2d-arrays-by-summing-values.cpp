class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
        int n = nums1.size();
        int m = nums2.size();
        int i = 0;
        int j = 0;
        int k = 0;

        vector<vector<int>> ans(n+m, vector<int> (2));

        while(i<n && j<m){
            if(nums1[i][0]< nums2[j][0]){
                ans[k][0] = nums1[i][0];
                ans[k][1] = nums1[i][1];
                i++;
            }
            else if(nums1[i][0] > nums2[j][0]){
                ans[k][0] = nums2[j][0];
                ans[k][1] = nums2[j][1];
                j++;
            }
            else {
                ans[k][0] = nums1[i][0];
                ans[k][1] = nums1[i][1] + nums2[j][1];
                i++;
                j++;
            }
            k++;
        }

        while(i<n){
            ans[k][0] = nums1[i][0];
            ans[k][1] = nums1[i][1];
            i++;
            k++;
        }

        while(j<m){
            ans[k][0] = nums2[j][0];
            ans[k][1] = nums2[j][1];
            j++;
            k++;
        }
        ans.resize(k);
        return ans;
    }
};