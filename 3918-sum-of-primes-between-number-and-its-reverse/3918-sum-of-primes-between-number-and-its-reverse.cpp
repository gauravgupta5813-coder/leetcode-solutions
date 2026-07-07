class Solution {
public:
    int sumOfPrimesInRange(int n) {
        int reversed_num = 0;
        int num = n;
        while (num > 0) {
            reversed_num = reversed_num * 10 + (num % 10);
            num/= 10;
        }

        int x = min(n, reversed_num);
        int y = max(n, reversed_num);
        int sum = 0;

        for (int i = x; i <= y; i++) {
            if (i <= 1)
                continue;
            if (i == 2){
                sum += i;
                continue;
            }
            if (i % 2 == 0) continue;

            bool isPrime = true;

            for (int j = 3; j * j <= i; j += 2) {
                if (i % j == 0){
                    isPrime = false;
                    break;
                }
            }
            if(isPrime){
                sum += i;
            }
        }
        return sum;
    }
};