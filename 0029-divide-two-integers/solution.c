int divide(int dividend, int divisor) {
    long a = dividend;
    long b = divisor;

    long res = a/b;

    if(res>INT_MAX){
        return INT_MAX;
    }
    if(res<INT_MIN)
        return INT_MIN;

    return (int)res;
}
