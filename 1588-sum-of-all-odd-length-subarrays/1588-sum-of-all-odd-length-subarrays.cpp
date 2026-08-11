class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int n = arr.size();
        int totalSum = 0;

        for(int i=0; i<n; i++){
            int curr_sum = 0;
            for(int j=i; j<n; j++){
                curr_sum += arr[j];
                if((j-i+1)%2 !=0){
                    totalSum += curr_sum;
                }
            }
        }
        return totalSum;
    }
};