class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int curr_sum = 0;
        int max_sum = INT_MIN;
        int min_sum = INT_MAX;

        for(int num : nums){
            curr_sum += num;
            max_sum = max(max_sum, curr_sum);

            if(curr_sum < 0){
                curr_sum = 0;
            }
        }
        curr_sum = 0;
        for(int num : nums){
            curr_sum += num;
            min_sum = min(min_sum, curr_sum);

            if(curr_sum > 0){
                curr_sum = 0;
            }
        }
        return max(abs(max_sum), abs(min_sum));
    }
};