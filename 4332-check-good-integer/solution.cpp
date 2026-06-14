class Solution {
public:
    bool checkGoodInteger(long long n) {
        int digitSum = 0;
        long long squareSum = 0;
        while(n!=0){
            int digit = n%10;
            digitSum += digit;
            squareSum += digit*digit;
            n/=10;
        }
        if((squareSum - digitSum)>=50) return true;
        return false;
    }
};
