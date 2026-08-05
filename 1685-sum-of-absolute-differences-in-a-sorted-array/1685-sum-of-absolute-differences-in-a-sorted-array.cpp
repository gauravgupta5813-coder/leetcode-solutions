class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
        int n = nums.size();
        int right_sum = 0;

        for(int x: nums){
            right_sum += x;
        }

        vector<int> result(n);
        int left_sum = 0;

       for(int i=0; i<n; i++){
            right_sum -= nums[i];

            int left_part = (nums[i]*i) - left_sum;
            int right_part = right_sum - (nums[i]*(n-1-i));

            result[i] = left_part + right_part;

            left_sum += nums[i];
       }
       return result;
    }
};