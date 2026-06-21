class Solution {
public:
    int countValidSubarrays(vector<int>& nums, int x){
        int count = 0;

        for(int i=0; i<nums.size(); i++){
            long long current = 0;
            for(int j=i; j<nums.size(); j++){
                current += nums[j];
        
                int last_digit = current % 10;
                if (last_digit == x) {
                    long long temp = current;
                    while (temp >= 10) {
                        temp /= 10;
                    }
                    int first_digit = temp;
                    
                    if (first_digit == x) {
                        count++;
                    }
                }
            }
        }
        return count;
    }
};
