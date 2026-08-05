class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int n = nums.size();
        int sum1 = 0;
        int sum2 = 0;
        int count = 0;

        for(int i=0; i<n-1; i++){
            sum1 += nums[i];
            for(int j=i+1; j<n; j++){
                sum2 += nums[j];
            }
            if((sum1 - sum2) % 2==0){
                count++;
            }
            sum2 = 0;
        }
        return count;
    }
};