int countDigitOccurrences(int* nums, int numsSize, int digit) {
    int count = 0;
    int x = 0;
    for(int i=0; i<numsSize; i++){
        while(nums[i]!=0){
            x = nums[i]%10;
            if(x == digit){
                count++;
            }
            nums[i]/=10;
        }
    }
    return count;
}
