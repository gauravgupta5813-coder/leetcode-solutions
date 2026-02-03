int minimumOperations(int* nums, int numsSize) {
    int count=0;
    for(int i=0; i<numsSize; i++){
        int rem = nums[i]%3;
        
        if(rem==1||rem==2){
            count+=1;
        }
    }
    return count;
}
