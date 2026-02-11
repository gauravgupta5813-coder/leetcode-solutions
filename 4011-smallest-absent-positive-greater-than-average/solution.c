int smallestAbsent(int* nums, int numsSize) {
    int sum = 0;
    for(int i=0; i<numsSize; i++){
        sum += nums[i];
    }
    int avg = sum/numsSize;
     
    int k=0;

    while(1) {

        k++;

        if(k <= avg)
            continue;

        int flag = 0;

        for(int i=0; i<numsSize; i++) {
            if(nums[i] == k) {
                flag = 1;
                break;
            }
        }

        if(flag == 0)
            return k;
    }
}
