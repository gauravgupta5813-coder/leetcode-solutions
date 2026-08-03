class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int sum = 0;
        int digitsum = 0;
        int n = nums.size();

        for(int i=0; i<n; i++){
            sum += nums[i];
            while(nums[i]!=0){
                digitsum += nums[i]%10;
                nums[i]/=10;
            }
        }
        return abs(sum - digitsum);
    }
};