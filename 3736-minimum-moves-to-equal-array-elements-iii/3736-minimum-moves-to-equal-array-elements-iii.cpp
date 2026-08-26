class Solution {
public:
    int minMoves(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int maxNum = nums[n-1];
        int count = 0;

        for(int x: nums){
            count += maxNum-x;
        }
        return count;
    }
};