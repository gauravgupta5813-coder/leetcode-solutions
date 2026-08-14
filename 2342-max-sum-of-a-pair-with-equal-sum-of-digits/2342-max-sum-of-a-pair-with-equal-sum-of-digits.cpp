class Solution {
public:
    int digitSum(int n){
        int sum = 0;

        while(n!=0){
            sum += n%10;
            n/=10;
        }
        return sum;
    }
    int maximumSum(vector<int>& nums) {
        vector<int> maxVal(82, 0);
        int max_sum = -1;

        for(int num: nums){
            int d = digitSum(num);

            if(maxVal[d]>0){
                max_sum = max(max_sum, maxVal[d] + num);
            }

            maxVal[d] = max(maxVal[d], num);
        }
        return max_sum;
    }
};