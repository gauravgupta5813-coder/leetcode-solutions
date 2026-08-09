class Solution {
public:
    int waysToMakeFair(vector<int>& nums) {
        int n = nums.size();

        vector<int> OddSum(n + 1,0);
        vector<int> EvenSum(n + 1,0);

        for(int i=0; i<n; i++){
            if(i%2==0){
                EvenSum[i+1] = EvenSum[i] + nums[i];
                OddSum[i + 1] = OddSum[i];
            } 
            else{
                OddSum[i+1] = OddSum[i] + nums[i];
                EvenSum[i + 1] = EvenSum[i];
            } 
        }

        int count = 0;

        for(int i=0; i<n; i++){
            int leftEven = EvenSum[i];
            int leftOdd = OddSum[i];

            int rightEven = OddSum[n] - OddSum[i+1];
            int rightOdd = EvenSum[n] - EvenSum[i+1];

            if(leftEven + rightEven == leftOdd + rightOdd){
                count++;
            }
        }
        return count;
    }
};