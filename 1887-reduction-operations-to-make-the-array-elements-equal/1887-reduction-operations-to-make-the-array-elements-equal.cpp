class Solution {
public:
    int reductionOperations(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int n = nums.size();
        int steps = 0;
        int ops = 0;

        for(int i=1; i<n; i++){
            if(nums[i] != nums[i-1]){
                steps++;
            }
            ops += steps;
        }
        
        return ops;
    }
};