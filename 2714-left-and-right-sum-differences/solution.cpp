class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n = nums.size();
        int totalsum = 0;

        for(int x: nums){
            totalsum += x;
        }
        vector<int> ans(n);
        int leftsum = 0;

        for(int i=0; i<n; i++){
            int rightsum = totalsum - leftsum - nums[i];
            ans[i] = abs(leftsum-rightsum);
            leftsum += nums[i];
        }
        return ans;
    }
};
