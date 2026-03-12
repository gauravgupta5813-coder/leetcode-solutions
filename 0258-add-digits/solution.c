int addDigits(int num) {
    int sum;
    while(num/10>0){
        sum=0;
        while(num!=0){
            int digit = num%10;
            sum += digit;
            num /= 10;
        }
        num = sum;
    }
    return sum;
}
