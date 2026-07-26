class Solution {
public:
    int scoreDifference(vector<int>& nums) {
        int n = nums.size();
        int first = 0;
        int second = 0;
        bool active1 = true;
        bool active2 = false;

        for(int i=0; i<n; i++){
            if((i+1)%6 == 0) {
                if(active1) {
                    active1 = false;
                    active2 = true;
                }
                else{
                    active2 = false;
                    active1 = true;
                }
            }
            if(nums[i] % 2 != 0){
                if(active1){
                    active1 = false;
                    active2 = true;
                    second += nums[i];
                }
                else {
                    active1 = true;
                    active2 = false;
                    first += nums[i];
                }
            } else {
                if(active1) first += nums[i];
                else second += nums[i];
            }
        }
        return first - second;
    }
};