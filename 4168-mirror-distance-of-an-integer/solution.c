int mirrorDistance(int n) {
    int original = n;
   int rev = 0;
   while(n!=0){
    int digit = n%10;
    rev = rev*10+digit;
    n /= 10;
   }
   int res = original-rev;
   return abs(res);
}
