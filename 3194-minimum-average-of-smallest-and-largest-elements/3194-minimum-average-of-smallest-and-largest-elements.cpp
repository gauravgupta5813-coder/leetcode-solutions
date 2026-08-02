class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        sort(nums.begin(),  nums.end());
        int n = nums.size();
        double avg = nums[n-1];
        int i=0, j=n-1;
        while(i<j){
            avg = min(avg, (double)(nums[i++]+nums[j--])/2);
        }
        return avg;
    }
};