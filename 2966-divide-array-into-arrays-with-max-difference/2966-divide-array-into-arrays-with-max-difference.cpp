class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> result;
        int n = nums.size();

        for (int i = 0; i < n - 2; i += 3) {
            vector<int> ans;
            if (nums[i + 2] - nums[i] <= k) {
                ans.push_back(nums[i]);
                ans.push_back(nums[i + 1]);
                ans.push_back(nums[i + 2]);
                result.push_back(ans);
            }
        }
        if(result.size()!=n/3) return {};
        return result;
    }
};