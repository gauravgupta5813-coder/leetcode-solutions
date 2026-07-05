class Solution {
public:
    int maxDigitRange(vector<int>& nums) {
        int n = nums.size();
        
        int max_range = -1;
        vector<int> ans(n,0);
        
        for(int i=0; i<n; i++){
            int temp = nums[i];
            int curr_min = 9;
            int curr_max = 0;
            
            while(temp!=0){
                int digit = temp%10;
                if(digit>curr_max){
                    curr_max = digit;
                }
                if(digit < curr_min){
                    curr_min  = digit;
                }
                temp/=10;
            }
            int curr_range = curr_max - curr_min;
            ans[i] = curr_range;

            if(curr_range > max_range){
                max_range = curr_range;
            }
        }
        int total = 0;
        for(int i=0; i<n; i++){
            if(ans[i] == max_range){
                total += nums[i];
            }
        }
        return total;
    }
};