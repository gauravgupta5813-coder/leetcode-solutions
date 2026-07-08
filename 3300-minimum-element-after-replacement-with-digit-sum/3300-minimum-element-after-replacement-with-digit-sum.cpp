class Solution {
public:
    int minElement(vector<int>& nums) {
        int n = nums.size();
        int min_num = INT_MAX;
        for(int i=0; i<n; i++){
            int sum = 0;
            while(nums[i]!=0){
                sum += nums[i]%10;
                nums[i]/=10;
            }
            min_num = min(sum, min_num);
        }
        return min_num;
    }
};