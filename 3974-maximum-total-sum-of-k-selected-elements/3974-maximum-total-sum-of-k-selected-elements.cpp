class Solution {
public:
    long long maxSum(vector<int>& nums, int k, int mul) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        long long sum = 0;
        for (int i = n - 1; i >= n - k; i--) {
            if (mul <= 0)
                sum += nums[i];
            else {
                sum += (long long)nums[i] * mul;
                mul--;
            }
        }
        return sum;
    }
};